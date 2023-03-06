import pandas
import math
from IPython.display import display
import os
from pathlib import Path
import numpy as np

pandas.set_option('display.max_rows', 500)

verbal = True

def importFile(fileName):
    return pandas.read_csv(fileName,  sep=";",header=1,index_col=False)

def LoadAndFilterFolder(directory, dataFrameArray, subjectNrArray, conditionArray):
    # iterate over files in
    # that directory
    for root, dirs, files in os.walk(directory):
        for filename in files:
            print(filename)
            filePath = os.path.join(root, filename)
            #print(os.path.join(root, filename))
            if(filename.endswith('.csv') and filename.startswith("0_TrackingData")):
                subjectNr = os.path.basename(Path(filePath).parents[1])
                locomotionTechnique = os.path.basename(Path(filePath).parents[2])
                if verbal:
                    print("append ", filePath, "subjectNr", subjectNr, " Locomotion Method", locomotionTechnique)
                dataFrameArray.append(filterFileToDataFrame(filePath))
                conditionArray.append(locomotionTechnique)
                subjectNrArray.append(subjectNr)
    return dataFrameArray, subjectNrArray, conditionArray


# if the column options are "right", "left",  or "none", this sets right to 1, left to -1, and none to 0.
def nrColBasedOnLeftRight(df, namedCol):
    if namedCol in df.columns:
        conditions = [
        (df[namedCol] == "right"),
        (df[namedCol] == "left"),
        (df[namedCol] == "none")
        ]

        # create a list of the values we want to assign for each condition
        values = [1.5, -1.5, 0]

        # create a new column and use np.select to assign values to it using our lists as arguments
        return np.select(conditions, values)
    else:
        return 0


def AddExtraColls(df):
    df['RoomPosX'] = df['PlayerX'] - df['LocomotionOffX']
    df['RoomPosZ'] = df['PlayerZ'] - df['LocomotionOffZ']
    df['SecFromFullStart'] = CalcTotalTime(df)
    df['EWMA_Left_Non_Abs'] = ListEWMA(df['LLHorSpeed'], 0.82)
    df['EWMA_Right_Non_Abs'] = ListEWMA(df['RLHorSpeed'], 0.82)
    df['EWMA_Both_Non_Abs'] = (df['EWMA_Left_Non_Abs'] + df['EWMA_Right_Non_Abs'] ) / 2

    # Filtering the sections where the person is moving, and afterwards filter out the parts where the person is moving backwards.
    df['isMoving'] = df['LocomotionSpeed'] > 0.05
    # label each section where the person is moving with a different letter
    df['MoveSectionLabels'] = BoolSectionDef(df['isMoving'])

    df['StandingLeadingFootNr'] = nrColBasedOnLeftRight(df, 'StandingLeadingFoot')
    df['LiftedLeadingFootNr'] = nrColBasedOnLeftRight(df, 'LiftedLeadingFoot')


    #  calculate the average speed over the whole duration of a letter. Also throw it away if a section is shorter than 1.5 seconds
    df['avgMovingSection'] = 0

    for sectionNr in range(1, max(df['MoveSectionLabels'])):
        sectionMask = df['MoveSectionLabels'] == sectionNr
        if df[sectionMask]['SecFromFullStart'].iloc[-1] - df[sectionMask]['SecFromFullStart'].iloc[0] < 0.5: 
            # moving section too short, throw away
            if verbal:
                print("remove too short moving section", sectionNr)
            df.loc[sectionMask, 'isMoving'] = False 
            df.loc[sectionMask, 'MoveSectionLabels'] = 0
        
        # if average speed < 0, shuffling backwards, set to False in isMoving
        averageSpeed = df.loc[sectionMask, 'avgMovingSection'] = df[sectionMask]['EWMA_Both_Non_Abs'].mean(axis=0) *5 
        if averageSpeed < 0:
            if verbal:
                print("remove backward moving section", sectionNr)
            df.loc[sectionMask, 'isMoving'] = False 
            df.loc[sectionMask, 'MoveSectionLabels'] = 0
    return df



def CalcTotalTime(df):
    totalOffset = 0
    SecFromFullStart = []
    SecFromFullStart.append(df['SecSinceStart'][0])
    for i in range(1, len(df['SecSinceStart'] )):
        if(df['SecSinceStart'][i] < df['SecSinceStart'][i-1]):
            totalOffset += df['SecSinceStart'][i-1]
        SecFromFullStart.append(totalOffset + df['SecSinceStart'][i])
    return SecFromFullStart



# returns new exponentially weighted average
def EWMA(prevAverage, newValue, rho):
    return rho * prevAverage + ((1-rho) * newValue)

# returns EWMA list based on another list
def ListEWMA(list, rho):
    average = 0
    EWMA_List = []
    for i in range(0, len(list)):
        average = EWMA(average, list[i], rho)
        EWMA_List.append(average)
    return EWMA_List


# for a mask with multiple rows of 11110001111. It labels: 11110002222 etc
def BoolSectionDef(list):
    currSign = list[0]
    sectionNr = 1
    sectionNrList = []
    for i in range(0, len(list)):
        if list[i] != currSign:
            if list[i] > 0:
                sectionNr +=1
        currSign = list[i]

        if list[i] > 0:
            sectionNrList.append(sectionNr)
        else:
            sectionNrList.append(0)
    return sectionNrList

def filterFileToDataFrame(fileName):
    df = importFile(fileName)
    df = AddExtraColls(df)
    return df









# with pandas.option_context('display.min_rows', 300, 'display.max_columns', 10):
#     display(df[['isMoving', 'MoveSectionLabels', 'avgMovingSection']].head(300))








