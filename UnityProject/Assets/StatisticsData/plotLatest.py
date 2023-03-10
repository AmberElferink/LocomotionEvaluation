import filterdata
import genVelocity
import directions

import pandas
import numpy as np

# no adjustments: just standingfoot based on height
# StandingFootVelocity/56/Scenario2_20230310_12234947/0_TrackingData_20230310_12234947.csv

# lowest difference last 16 values (wrong): StandingFootVelocity/56/Scenario2_20230309_17503712/0_TrackingData_20230309_17503713.csv
# lowest velocity based (minor issue in the MovingForwards instead of AvgMovingForwards) StandingFootVelocity/56/Scenario2_20230309_16004662/0_TrackingData_20230309_16004662.csv

# lowest velocity based, last one without both movingForward  StandingFootVelocity/56/Scenario2_20230309_18292069/0_TrackingData_20230309_18292070.csv

# lowest difference last 32 values standingfoot between them: StandingFootVelocity/56/Scenario2_20230310_13202838/0_TrackingData_20230310_13202838.csv
# lowest difference standingfoot last 32 values with currentvalue  StandingFootVelocity/56/Scenario2_20230310_13481815/0_TrackingData_20230310_13481816.csv
# lowest difference both feet total 64 values with currentvalue
df = filterdata.filterFileToDataFrame("StandingFootVelocity/56/Scenario2_20230310_14484138/0_TrackingData_20230310_14484138.csv")

directions.processDirections(df)
dtlist = np.diff(df['SecSinceStart'])
dtlist = np.insert(dtlist, 0, 0, 0)
df['dt'] = dtlist * 100 - 2.25

genVelocity.clearData()
#genVelocity.addData('PlayerHorSpeed', 'Player speed')
genVelocity.addData('LLegPosY', "Left leg height")
genVelocity.addData('RLegPosY', "Right leg height")
#genVelocity.addData('LLHorSpeed', "Left Foot horizontal")
#genVelocity.addData('EWMA_Left_Non_Abs', "EWMA Left Foot horizontal")
#genVelocity.addData('EWMA_Right_Non_Abs', "EWMA Right Foot horizontal")
#genVelocity.addData('RLHorSpeed', "Right Foot horizontal")
#genVelocity.addData('LocomotionSpeed', 'Locomotion speed')
#genVelocity.addData('LeftFootPitch', 'Left foot pitch')
#genVelocity.addData('AllTrackersWorking', 'All trackers working')
#genVelocity.addData('dt', 'deltaTime logging (centi seconds)')
#genVelocity.addData('headAngleRad', 'Head rotation')
#genVelocity.addData('LAvgVelMag', 'leftAvgSpeed')
#genVelocity.addData('RAvgVelMag', 'rightAvgSpeed')
genVelocity.addData('LeftVelRad', 'leftAngle')
genVelocity.addData('RightVelRad', 'rightAngle')
genVelocity.addData('dirAngleRad', 'world direction radians')
genVelocity.addData('StandingLeadingFootNr', 'st right: 1.5, left: -1.5, none: 0')

genVelocity.plotVelocities(df, "file", isMoving=False)