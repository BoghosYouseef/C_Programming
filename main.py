# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
from sklearn.linear_model import LinearRegression
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from statsmodels.distributions.empirical_distribution import ECDF
df = pd.read_csv("diamonds.csv")

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
x = np.reshape(df.carat.to_numpy(), (-1, 1))
model = LinearRegression()
model.fit(x, df.price)

print("intercept: ", model.intercept_)
print("slope: ", model.coef_)
r_sq = model.score(x, df.price)
print("coefficient of determinant: ", r_sq)
y_pred = model.predict(x)
plt.plot(df.carat, df.price, 'o', color="cyan", markersize = 0.05)
plt.plot(df.carat, y_pred, '-', color="red", markersize= 0.1)


df = pd.read_csv('diamonds.csv')
df.price.hist(binx=10, grid=False, edgecolor='black', color='white')

ecdf = ECDF(df.price.to_numpy())
plt.plot(ecdf.x, ecdf.y)
age = [43, 21, 25, 42, 57, 59]
glucose_lvl = [99, 65, 79, 75, 87, 81]
np.corrcoef(age, glucose_lvl)