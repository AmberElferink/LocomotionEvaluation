# Changing initial tracker orientation
All trackers should already be in correct default orientation after doing the following settings. 
First make sure the trackers are correctly set-up in SteamVR and the calibration files:
- Open SteamVR Settings > Controllers > Manage Trackers
- Set "Waist" for the controller meant on the hip. "Left foot" for the one meant on the foot, and "Right foot" for the one on the right foot.
- If you don't know which tracker is what, turn them on/off one by one to see this.
- Open This projects StreamingAssets > tracker_config.txt file. Set each ID according to the trackers in the Manage Trackers SteamVR menu.
- If this is all set correctly, the application should automatically correctly position the trackers.


If you want to change the startingrotation, this can be influenced by two things:
1 The SteamVR tracker role (a "foot" starts horizontally. A "hip" or "hand" tracker starts vertically.
2 There is also an easy to use script to calibrate this in the Unity Scene editor easily and save it to a calibration file to be loaded on start.
- Open the Unity scene
- Press play, and select and rotate the tracker as you want it to start.
- Select on the parent (for example "LiftedFoot", if you adapted the tracker in that locomotion hierarchy).
- In the Inspector, select "Save Tracker Calibration".
- Stop play.
- Now each time you press play, it should load the correct configuration. Note: this will happen for ALL locomotion objects referencing the same calibration file.
