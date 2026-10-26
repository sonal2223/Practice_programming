#include<stdio.h>
//Logical operators combine or reverse conditions and return true (1) or false (0).
int main(){
	int age =22;
	printf("%d\n", age>20 && age<25);
	printf("%d\n", age>20 || age<10);
	printf("%d\n",!(age>30));
	
}
