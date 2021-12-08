import os
from glob import glob
import pandas as pd
import numpy as np
from math import pi


data = pd.read_csv("./Result/CurveTotalData.csv", encoding='utf-8-sig')
total_df = pd.DataFrame(data)  

total_df = total_df.reset_index(drop=True)

condition = (total_df.LftCurveVal > 0 )
condition_no = (total_df.LftCurveVal < 0 )
a = total_df[(total_df.Curvature==0.00255068) & (total_df.LftCurveVal==0.00200462)].count()[0]
print('개수는')
print(a)
             
#total_df.loc[(total_df.QualLvlLft01Sta >= 2) & (total_df.LftCurveVal > 0) ,'Right_Outer_err'] = (abs(total_df.loc[condition,'Curvature'])-abs(total_df.loc[condition,'LftCurveVal']) )/ abs(total_df.loc[condition,'Curvature']) * 100
#total_df.loc[(total_df.QualLvlRt01Sta >= 2) & (total_df.LftCurveVal > 0) ,'Right_Inner_err'] = (abs(total_df.loc[condition,'Curvature'])-abs(total_df.loc[condition,'RtCurveVal']) )/ abs(total_df.loc[condition,'Curvature']) * 100


#print(total_df.head())