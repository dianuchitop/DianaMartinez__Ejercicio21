#compila ese codigo
#graficar marcha aleatoria

import numpy as np
import matplotlib.pyplot as plt




data = np.loadtxt("walk.txt").T
plt.figure(figsize=[10,10])
plt.scatter(data[0],data[1],s=20)
for i in range(1,len (data[0])):
    plt.plot([data[0][i-1],data[0][i]],[data[1][i-1],data[1][i]],c="orange")
plt.title("Random walk")
plt.savefig("randomwalk.png")
