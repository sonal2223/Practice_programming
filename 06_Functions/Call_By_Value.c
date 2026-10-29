#include<stdio.h>
//Call by value passes a copy of a variable's value to a function.
change(int a){
	a=10;
}
int main(){
	int b=20;
	
	change(b);
	printf("%d\n", b);
}
