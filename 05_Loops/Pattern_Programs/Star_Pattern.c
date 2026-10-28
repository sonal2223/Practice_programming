#include<stdio.h>
//A star pattern program uses loops to print stars in a specific shape.
int main(){
	int i;
	int j;
	for(i=1; i<=3; i++){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
