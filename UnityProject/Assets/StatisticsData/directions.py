import filterdata
import math
import numpy as np
import pandas as pd
import genVelocity

#df = filterdata.filterFileToDataFrame('0_TrackingData_20230215_17133531.csv')

# (angle + a) % 360 - 180. a can be set if the interesting part of the angle is usually at the wrapping around value (sometimes 5 degrees, sometimes 355 degrees)
def processDirections(df):
    #df['TargetPosY'] = df['TargetPosY'] % 360 - 180 #np.where(df['TargetPosY'] >= 180, df['TargetPosY'] - 360, df['TargetPosY'])
    df['DirectionRotY'] = (df['DirectionRotY'] - 90) % 360 - 180
    df['dirAngleRad'] = df['DirectionRotY'] * math.pi / 180

    #-180 since i wanted the standing foot angle here
    df['LAvgVelAngle'] = (df['LAvgVelAngle'] - 180 - 90)% 360 - 180
    df['LeftVelRad'] = df['LAvgVelAngle'] * math.pi / 180

    
    df['RAvgVelAngle'] = (df['RAvgVelAngle'] - 180 - 90)% 360 - 180
    df['RightVelRad'] = df['RAvgVelAngle'] * math.pi / 180



    df['HeadRotY'] = (df['HeadRotY'] + 90)% 360 - 180
    df['headAngleRad'] = df['HeadRotY'] * math.pi / 180

    df['LLegRotZ'] = (df['LLegRotZ'] + 90 )% 360 - 180
    df['LeftFootPitch'] = df['LLegRotZ'] * math.pi / 180


    

    return df


# did not test, but in theory this should output an angle in radians around the up vector for a vector pointing in a direction (for example, a velocity vector)
def angle_around_up(df, x_col, y_col, z_col, up=np.array([0, 1, 0]), zero_dir_axis=np.array([1, 0, 0])):
    # Extract the direction vector from the DataFrame columns
    direction = df[[x_col, y_col, z_col]].values
    # Project direction vector onto plane perpendicular to up vector
    proj = direction - np.dot(direction, up) * up
    proj /= np.linalg.norm(proj, axis=1, keepdims=True)

    # Calculate the angle between the projected direction vector and the zero_direction axis
    dot = np.sum(proj * zero_dir_axis, axis=1)
    cross = np.cross(proj, zero_dir_axis)
    angle = np.arctan2(np.linalg.norm(cross, axis=1), dot)

    # Determine the sign of the angle based on the direction of the cross product
    cross_up_x = np.cross(up, zero_dir_axis)
    cross_x_proj = np.cross(zero_dir_axis, proj)
    sign = np.sign(np.sum(cross_up_x * cross_x_proj, axis=1))
    angle *= sign

    # Add the angle column to the DataFrame
    return angle
