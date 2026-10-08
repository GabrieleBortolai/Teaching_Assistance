import pandas as pd
import numpy as np

def segments_loader_resampled(seg_path):

    """
    seg_path: folder with segments
    output: array with shape [n, 74, 11]

    n -> number of segments
    70 -> length of segments 

    seg[:, :, 0] -> timestamp_ns (ns=nano seconds)
    seg[:, :, 1] -> angular velocity x
    seg[:, :, 2] -> angular velocity y
    seg[:, :, 3] -> angular velocity z
    seg[:, :, 4] -> acceleration x
    seg[:, :, 5] -> acceleration y
    seg[:, :, 6] -> acceleration z
    seg[:, :, 7] -> gravity x
    seg[:, :, 8] -> gravity y
    seg[:, :, 9] -> gravity z
    seg[:, :, 10] -> time_ms_loc (local time in milliseconds)
    seg[:, :, 11] -> lunghezza del segmento prima del ricampionamento
    
    imu_0 -> upper right leg
    imu_1 -> low right leg
    imu_2 -> upper left leg
    imu_3 -> low left leg

    example: 
    
        path_to_file = Path("location_segments/user_00_sync/case_3/IMUs/imu_1_segments_resampled.csv")
        imu_1_segs = segments_loader_resampled(path_to_file)
    
    """
    df = pd.read_csv(seg_path)

    segments = [group.drop(columns = "segment_id").to_numpy()
                for _, group in df.groupby("segment_id")]

    return np.array(segments) 