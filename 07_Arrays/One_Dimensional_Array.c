#include<stdio.h>
//A one-dimensional array stores multiple values of the same data type in a single variable.
int main(){
	int number[]={10,20,30};
	int i;
	for(i=0; i<3; i++){
		printf("%d\n", number[i]);
	}
}
