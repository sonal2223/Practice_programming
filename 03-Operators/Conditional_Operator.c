#include<stdio.h>
//The conditional operator (?:) selects a value based on a condition.
int main(){
	int a=10,  b=5;
	int max= (a>b)? a:b;
	printf("%d\n",max);
}
