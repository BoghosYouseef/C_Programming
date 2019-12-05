# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
from sklearn.linear_model import LinearRegression
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


df = pd.read_csv("C:\\Users\\0180701856\\Downloads\\diamonds.csv")

print(df.head(10))
print(df.describe())
print(df.price.describe())

figur1 = plt.figure(1)

pic1 = plt.plot(df.price,'o', color='cyan', markersize= 0.04)
plt.show()

figur2 = plt.figure(2)

pic2 = plt.plot(df.price.sample(frac=1).reset_index(drop=True),'o',color="red",markersize= 0.05)
plt.show()


figure3 = plt.figure(3)

pic3 = plt.plot(df.carat, df.price,'o',color="blue", markersize= 0.05)
plt.show()

tmp = df[(df.carat>1.99) & (df.carat<2.01)]
max(tmp.price)
min(tmp.price)

# pic4 = plt.plot(tmp,'o', color="black", markersize=0.5)
# plt.show()
input()

model = LinearRegression()
model.fit(x, df.price)

