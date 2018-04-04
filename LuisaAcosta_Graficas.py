import numpy as np 
import matplotlib.pyplot as plt

cpp=np.loadtxt("times.txt")
py=
x=list(range(36))


plt.plot(x, cpp[:, 1])
plt.savefig("cpp.png")




