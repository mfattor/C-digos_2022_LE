# -*- coding: utf-8 -*-
"""Pandas.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1Eq0NaTxEuAFCPTBOJvlE6NhLXBX7_6S-
"""

import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv("/content/dataset_adopciones.csv")
df_limpieza = df.dropna()
df_limpieza