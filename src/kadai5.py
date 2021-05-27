import pandas as pd
from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# データの読み込み
df = pd.read_table("data.txt", sep=",", names=["x", "y", "z"])

# グラフの描画
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.set_xlabel("x", size = 14)
ax.set_ylabel("y", size = 14)
ax.set_zlabel("z", size = 14)
ax.scatter(df.x, df.y, df.z, s=5)
plt.show()

# x**2+y**2+z**2を計算
df["x^2+y^2+z^2"] = df["x"] ** 2 + df["y"] ** 2 + df["z"] ** 2

df_1 = df[(df["x^2+y^2+z^2"].round(3) > 0.99) & (df["x^2+y^2+z^2"].round(3) < 1.01)]

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.set_xlabel("x", size = 14)
ax.set_ylabel("y", size = 14)
ax.set_zlabel("z", size = 14)
ax.scatter(df_1.x, df_1.y, df_1.z, s=5)
plt.show()
