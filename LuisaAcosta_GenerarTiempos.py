import numpy as np 
import time

#Fibonacci para python
def Fibonacci(N):
	if(N<2):
		return 1
	else:
		return (Fibonacci(N-1)+Fibonacci(N-2))
		
#sacar tiempo para comparar, se hace un for para guardar N y el tiempo para cada iteracion
enes=[]
tiemposenes=[]
for i in range(36):
	enes.append(i)
	t0=time.time()
	Fibonacci(i)
	t1=time.time()-t0
	tiemposenes.append(t1)

print enes 
print tiemposenes



