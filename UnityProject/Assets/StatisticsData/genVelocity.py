import filterdata

import numpy as np
import pandas
from matplotlib import pyplot as plt
import matplotlib.axes._axes as axes
import matplotlib.figure as figure
from matplotlib.collections import LineCollection
from matplotlib.colors import ListedColormap, BoundaryNorm
from IPython.display import display

# plotVelocities(filterdata.filterFileToDataFrame('0_TrackingData_20230215_17133531.csv'))

xaxisRange = 'SecFromFullStart'
yaxisRange = 'RLHorSpeed'
ystep = 0.5
xstep = 2

pointSetsX = 'SecFromFullStart'
pointSetsY =  ['RLHorSpeed', 'LLHorSpeed', 'LocomotionSpeed', 'PlayerHorSpeed']
labelSets = ['Right Leg horizontal speed', 'Left Leg horizontal speed', 'Locomotion speed', 'PlayerHorSpeed']


#yes I know I know, don't use global variables. But it's quick
def clearData():
    global pointSetsY
    global labelSets
    pointSetsY = []
    labelSets = []

def addData(dfKey, label):
    pointSetsY.append(dfKey)
    labelSets.append(label)


#generates multiple plots for different runs. See example in allData.py
# dataframes = {'lt': [], 'subjectnr': [], 'df': []}
def multipleVelocityPlots(dfs, locomotionTechnique):
    for i in range(0, len(dfs["df"])):
        if(dfs['lt'][i] == locomotionTechnique):
            plotVelocities(dfs['df'][i], "LT: " + dfs['lt'][i] + " Subject: " + dfs['subjectnr'][i])

def specificVelocityPlot(dfs, locomotionTechnique, subject):
    for i in range(0, len(dfs["df"])):
        if(dfs['lt'][i] == locomotionTechnique and dfs['subjectnr'][i] == subject):
            plotVelocities(dfs['df'][i], "LT: " + dfs['lt'][i] + " Subject: " + dfs['subjectnr'][i])



# returns PlayerHorSpeed and LocomotionSpeed avg
#dontshow is optional mask such as:    dontShow = dataset['isMoving'] == False                 #dontShow = False #if you do not want to filter 
def calcAvgLocomotionVel(df, onlyMoving=True):
    dontShow = False
    if onlyMoving:
        dontShow = df['isMoving'] == False
    if type(dontShow) == pandas.Series:
       return df[~dontShow]['PlayerHorSpeed'].mean(), df[~dontShow]['LocomotionSpeed'].mean()
    else:
        return df['PlayerHorSpeed'].mean(), df['LocomotionSpeed'].mean()



#calcAvgLocomotionVel(filterdata.filterFileToDataFrame('0_TrackingData_20230215_17133531.csv'))

def plotVelocities(df, title, isMoving = True):
    task1 = df[df['Task'].str.contains("MW")]
    task2 = df[df['Task'].str.contains("BW")]
    task3 = df[df['Task'].str.contains("CW")]




    # with pandas.option_context('display.min_rows', 300, 'display.max_columns', 10):
    #     display(df[['isMoving', 'MoveSectionLabels', 'avgMovingSection']].head(300))

    dataset = df

    if isMoving:
        dontShow = dataset['isMoving'] == False #dontShow = False #if you do not want to filter 
    else:
        dontShow = False
    #for calculations, to work with the unfiltered: dataset[~dontShow]


    # colored line plots, multiple subplots
    # https://matplotlib.org/stable/gallery/lines_bars_and_markers/multicolored_line.html

    fig, ax = plt.subplots() # type:figure.Figure, axes.Axes

    for i in range(0, len(pointSetsY)):
        plt.plot(np.ma.masked_where(dontShow, dataset[pointSetsX]), np.ma.masked_where(dontShow, dataset[pointSetsY[i]]), label = labelSets[i]) 
        plt.axis('equal')
        plt.title(title)
        plt.legend()

    # dataset.plot(x=xaxis, y=yaxis, 
    #     xticks=np.arange(round(min(dataset[xaxisRange])), round(max(dataset[xaxisRange])), step=xstep),
    #     yticks=np.arange(round(min(dataset[yaxisRange])), round(max(dataset[yaxisRange])), step=ystep),
    #     ylabel= yaxis,
    #     )

    # Only do Settings after .plot call!!!!

    ax = plt.gca() #type: axes.Axes

    ax.set_xticks(np.arange(round(min(dataset[xaxisRange])), round(max(dataset[xaxisRange])), step=xstep))
    ax.set_yticks(np.arange(round(min(dataset[yaxisRange])), round(max(dataset[yaxisRange])), step=ystep))
    ax.set_xlabel('X', loc = "right")
    ax.set_ylabel('Y', rotation=0, loc="top")
    ax.set_adjustable("box")
    ax.set_xbound(min(dataset[xaxisRange]), max(dataset[xaxisRange]))
    #ax.set_xbound(min(dataset[xaxisRange]), 24)

    # ... and label them with the respective list entries
    # ax.set_xticklabels(farmers)
    # ax.set_yticklabels(vegetables)

    ax.spines['right'].set_color('none')
    ax.spines['top'].set_color('none')

    ax.xaxis.set_ticks_position('bottom')
    ax.yaxis.set_ticks_position('left')

    ax.spines['bottom'].set_position(('data', 0))
    ax.spines['left'].set_position(('data', 0))

    for label in ax.get_xticklabels() + ax.get_yticklabels():
        label.set_fontsize(12)
        #label.set_bbox(dict(facecolor='y', edgecolor='None', alpha=0.7))





    plt.show()

