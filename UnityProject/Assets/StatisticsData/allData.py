import filterdata
import genVelocity
import directions

import pandas
import numpy as np

def calculateAverages(dfs, onlyMoving):
    for i in range(0, len(dfs["df"])):
        avgPlayerSpeed, avgLocSpeed = genVelocity.calcAvgLocomotionVel(dfs['df'][i], onlyMoving)
        dfs['avgLocVel'].append(avgLocSpeed)
        dfs['avgPlayerVel'].append(avgPlayerSpeed)






dataframes = {'lt': [], 'subjectnr': [], 'df': [], 'avgLocVel':[], 'avgPlayerVel':[]}

filterdata.verbal = False
filterdata.LoadAndFilterFolder(".", dataframes["df"], dataframes["subjectnr"], dataframes['lt'])


calculateAverages(dataframes, True)
print(pandas.DataFrame(data=dataframes))

for df in dataframes["df"]:
    directions.processDirections(df)
    dtlist = np.diff(df['SecSinceStart'])
    dtlist = np.insert(dtlist, 0, 0, 0)
    df['dt'] = dtlist * 100 - 2.25

genVelocity.clearData()
genVelocity.addData('PlayerHorSpeed', 'Player speed')
genVelocity.addData('LLegPosY', "Left leg height")
genVelocity.addData('RLegPosY', "Right leg height")
#genVelocity.addData('LLHorSpeed', "Left Foot horizontal")
#genVelocity.addData('EWMA_Left_Non_Abs', "EWMA Left Foot horizontal")
#genVelocity.addData('EWMA_Right_Non_Abs', "EWMA Right Foot horizontal")
#genVelocity.addData('RLHorSpeed', "Right Foot horizontal")
genVelocity.addData('LocomotionSpeed', 'Locomotion speed')
genVelocity.addData('dirAngleRad', 'world direction radians')
#genVelocity.addData('LeftFootPitch', 'Left foot pitch')
genVelocity.addData('AllTrackersWorking', 'All trackers working')
#genVelocity.addData('dt', 'deltaTime logging (centi seconds)')
#genVelocity.addData('headAngleRad', 'Head rotation')
genVelocity.addData('StandingLeadingFootNr', 'st right: 1.5, left: -1.5, none: 0')




genVelocity.multipleVelocityPlots(dataframes, "AverageShoesVelocityRecordingBuild")
#genVelocity.multipleVelocityPlots(dataframes, "StandingFootVelocity")

#genVelocity.specificVelocityPlot(dataframes, "StandingFootVelocity", "IfForwardThenOtherFootLeadingAlsoIfOnlyFootStandingIncludingTrackerLossFailSafe")

    




# for i in range(0, len(dfs)):
#     genVelocity.plotVelocities(dfs[i], "LT: " + locomotionTechniques[i] + "Subject: " + subjectNrs[i])

