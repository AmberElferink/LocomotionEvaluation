# What is this?
This is a repository that contains the Unity environment from the VR shoes experiment (LINKKKKKK to full paper).

- This project: [VR shoes Unity Environment Github](https://github.com/AmberElferink/LocomotionEvaluation). It is the virtual Unity environment in the user test that the users walked in and gathered the tracking data.
- [Processing tracker data Github](https://github.com/AmberElferink/VRshoesDataProcessing): Processing tracking data from Unity to plots and csv files ready for statistic analysis.
- [VR shoes R statistics processing Github](https://github.com/AlexisDerumigny/Reproducibility-VR-Project): For statistics processing in R.



## Raw User Experience data / Questionnaires

- [Raw Data Consent form + demographics + Habituation questions Google Spreadsheet](https://docs.google.com/spreadsheets/d/18L1FDxcECkfh0YWAIcpaJXAqzQvc4uHcm83MKERbGXg/edit?usp=sharing)
- [Raw Data UX answers for each trial](https://docs.google.com/spreadsheets/d/1mwZUULM_gU6-xjh3AGX8X6qKFkpROcqetkRowhyOwM8/edit?usp=sharing)


If you want to use the questionnaire in your own experiment, you can copy the form for your own use with the following links:
- [Consent form + demographics + Habituation Google Form ](https://docs.google.com/forms/d/16HUnzGaGV9iMNdykEuPBm8y9UqQQHBMW23HlNOklhPY/copy)
- [UX questions for each trial Google Form](https://docs.google.com/forms/d/1SUaqCdrhtiCeiOQPW767yPz0z7UIzTfgg31t2_o47Wo/copy)


## How to install
Compatible with any VR system compatible with Valve lighthouse/basestation tracking, and Vive trackers. Recommended to use at least four 2.0 lighthouses (1.0 only supports up to two lighthouses) to prevent tracker losses of the trackers on the feet.

Steps:
- Install Unity Hub, and from the Unity Hub go to Installs > Install Unity Editor > Archive > download archive, and click the install button next to version 2018.4.28f1
- Install Git, and clone the project: `git clone https://github.com/AmberElferink/LocomotionEvaluation`, or if unfamiliar with Git just download this project (Green button `Code` > `Download Zip`) from this page.
- With Unity Hub > Projects > Open, select the folder and go into it until you can see (but are not inside) the Asset folder.
- The Unity Editor should now open the project.
- If package errors are reported, press Continue, open the Package Manager (Window -> Package Manager) and try updating the involved packages, after that restart the project
- Open Assets > Scenes > Scenario2. This was used in our experiment. If you set up your trackers (see the steps below), this should now give motion through the environment based on the selected locomotion technique. 
- Before building, open each scene file and perform the bake of the lighting (Window -> Lighting Tab -> Generate Lighting). This can take a bit of time depending on your gpu (progress right bottom).
- To build the project, also include the Launcher scene, so you can quickly set the `Locomotion Technique (direction condition)`, and subject number.
- Make sure when building the project to work with the Launcher, _getLocomotionFromConfigFile is true in Scenario2.unity > ScenarioManager, or it will not load the proper locomotion technique.
- Make sure your floor in the SteamVR room setup is flat. Sometimes in room setup one side of the room is higher than another, due to a misaligned IMU in the headset. It can help to balance your VR headset on the front (90 flipped orientation) during floor height calibration to get this right.

The project was created and tested with [**Unity 2018.4.x (LTS)**](https://unity3d.com/unity/qa/lts-releases?version=2018.4)
- NOTE: the project is built around the **SteamVR asset v1.2.3**, any update to higher versions of the asset will break part of the code due to the different input management (of course is possible to update the SteamVR version installed on the host system)
The list of package dependencies is in the [**manifest file**](UnityProject/Packages/manifest.json) and will be automatically managed by the Unity editor


### Fixing tracker orientation:
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

# What is in what file?
Scenario2.unity is the scene that contains the environment as used in the experiment.
All the code of this project is located in the Assets > Locomotion project.
Specifically [SmoothLocomotion](#SmoothLocomotion) contains the main walking algorithm.


When opening the Scene, the locomotion logic is in StandingFoot, AverageFoot, Hip, and Head objects. On Play, the active locomotion is enabled by the ScenarioManager object, in the LocomotionManager script. It can either be set to open a locomotion technique from the config file, which is necessary when working with the Launcher, so set _getLocomotionFromConfigFile to true when building to work with the Launcher! For testing, you can set this to false, and select it with the LocomotionTechnique field there instead.

Each locomotion object contains the following:

## [SmoothLocomotion](https://github.com/AmberElferink/LocomotionEvaluation/blob/master_public/UnityProject/Assets/Locomotion/SmoothLocomotion.cs)
Contains the main algorithm for each direction condition. The thresholds for lifted, standingfoot, and speed scaling (in our case used to match pilot data to precisely match movement across the virtual floor) can be set here as well. All these functions are called from the FixedUpdate function within that script. This algorithm is further explained in the paper.


## [AnimateTrackersFromFile](https://github.com/AmberElferink/LocomotionEvaluation/blob/master_public/UnityProject/Assets/Locomotion/AnimateTrackersFromFile.cs)
This can replay any raw tracker data. For this, place the file you want to replay in /StreamingAssets/, and enter the filename into the field in AnimateTrackersFromFile.
- In the existing scene, the names/transforms are prefilled, but this menu is used to link column names in the file to actual in scene transforms that should be moved.
- It expects each name to contain 6 columns with postfix "_px", "_py", "_pz", "_rx", "_ry", "_rz" for position and rotation to be indicated.
- To find rawTrackerdata from the experiment, see [Processing tracker data Github](https://github.com/AmberElferink/VRshoesDataProcessing).
- To record your own tracker data, use the RecordTrackersToFile.cs script.
- To animate the tracker data, press the AnimateTrackers button.
- Load tracker calibration can be used to write a transform once, to for example load a saved calibration (recordable with RecordTrackersToFile).
    
## Contact
- If there is an issue with this software, or you have a question, please leave an Issue above.
- If you want to use any of the developed code in your work, please cite the corresponding paper at the top.
- Original testbed by https://github.com/VRatPolito/LET-VR

## License
Experimental material and Unity project are licensed under
 [![License: CC BY 4.0](https://img.shields.io/badge/License-CC%20BY%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by/4.0/)
 

