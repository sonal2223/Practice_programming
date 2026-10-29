#include<stdio.h>
//Factorial recursion calculates a number's factorial by calling the function repeatedly.
int factorial(int n){
	if(n<=1)
	return 1;
	
	return n * factorial(n-1);
}
int main(){
	printf("%d\n", factorial(5));
}
