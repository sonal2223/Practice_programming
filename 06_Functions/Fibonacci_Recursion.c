#include<stdio.h>
//Fibonacci recursion calculates Fibonacci numbers by calling the function recursively.
int fibonacci(int n){
	if(n<=1)
	return n;
	
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int i;
	for(i=0; i<=6; i++){
		printf("%d ", fibonacci(i));
	}
}
