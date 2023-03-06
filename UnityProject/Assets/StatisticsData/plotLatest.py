import filterdata
import genVelocity
import directions

import pandas
import numpy as np

df = filterdata.filterFileToDataFrame("0_TrackingData_20230306_17013909.csv")

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
genVelocity.addData('LAvgVelMag', 'leftAvgSpeed')
genVelocity.addData('LeftVelRad', 'leftAngle')
genVelocity.addData('StandingLeadingFootNr', 'st right: 1.5, left: -1.5, none: 0')

genVelocity.plotVelocities(df, "file")