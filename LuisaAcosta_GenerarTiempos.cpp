

#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int Fibonacci(int N);
float get_time(int N);

int main(){
	float a;
	int N;
	int i;

	for (i==0, i<=35, i++){
		cout<< i << " " << get_time(i) << endl;
}
	return 0; 
}

/* Declarar fibonacci*/
int Fibonacci(int N){
	if(N<2){
		return 1;
}
	else {
		return (Fibonacci(N-1)+Fibonacci(N-2)); /*esta es la recursividad*/
}
}

/*contar lo que se demora*/
float get_time(int N){
	clock_t t;
	t=clock();
	Fibonacci(N);
	t=clock() - t;
	float time = ((float)t)/CLOCKS_PER_SEC;

	return time;
}




