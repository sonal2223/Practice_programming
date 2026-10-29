#include<stdio.h>
//Recursion is a technique in which a function calls itself.
count(int n){
	if(n==0)
	return;
	
	printf("%d\n", n);
	count(n-1);
}
int main(){
	count(3);
}
