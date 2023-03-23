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

# velocity based only with StandingFootVelocity/56/Scenario2_20230310_14484138/0_TrackingData_20230310_14484138.csv
# new speed, Standingfootvelocity StandingFootVelocity/56/Scenario2_20230310_15341048/0_TrackingData_20230310_15341049.csv

#liftedfoot with standing in between StandingFootVelocity/56/Scenario2_20230310_16370981/0_TrackingData_20230310_16370982.csv
#liftedfoot only StandingFootVelocity/56/Scenario2_20230310_16425889/0_TrackingData_20230310_16425890.csv

#standingfoot real walking after adapting to the velocity based, gives peak on switch  AfterFixes/0_TrackingData_20230314_11505181.csv
# same, but now with attempted median filter before the Lerp. StandingFootVelocity/56/Scenario2_20230314_15313958/0_TrackingData_20230314_15313958.csv
# same, but with average filter before the lerp StandingFootVelocity/56/Scenario2_20230314_16105318/0_TrackingData_20230314_16105319.csv
# same, no filter, and no lerp StandingFootVelocity/56/Scenario2_20230314_16261697/0_TrackingData_20230314_16261698.csv
# no filter, but checking for maxangle difference StandingFootVelocity/56/Scenario2_20230314_16324946/0_TrackingData_20230314_16324946.csv
# no filter, no angle change if larger than 30 degrees wrt previous StandingFootVelocity/56/Scenario2_20230314_17020570/0_TrackingData_20230314_17020571.csv
# including lerp StandingFootVelocity/56/Scenario2_20230314_17120862/0_TrackingData_20230314_17120863.csv
#fixed direction StandingFootVelocity/56/Scenario2_20230314_17341594/0_TrackingData_20230314_17341595.csv

# real walking the fixed direction implementation. It includes:
# standingfoot on combination of height and velocity
# only setting orientation if speed > 0.07
# if not the first set, only update if angledifference between current and previous is not larger than 30 degrees
# this last part does prevent the sideways spikes between angle switches of the feet. 
# However, it loses the correct orientation if the direction gets of track due to being set iteratively faultily within the 30 degree bounds, and not being able to get back once off.
# StandingFootVelocity/56/Scenario2_20230314_18005218/0_TrackingData_20230314_18005219.csv
df = filterdata.filterFileToDataFrame("StandingFootVelocity/56/Scenario2_20230315_14260062/0_TrackingData_20230315_14260062.csv") # current file of average filter in there, to show the spikes between angle changes filtered out by the new one

#average


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
#genVelocity.addData('LiftedLeadingFootNr', 'st right: 1.5, left: -1.5, none: 0')

genVelocity.plotVelocities(df, "file", isMoving=False)