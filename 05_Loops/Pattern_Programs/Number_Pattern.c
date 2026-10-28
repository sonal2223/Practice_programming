#include<stdio.h>
//A number pattern program uses loops to print numbers in a specific shape.
int main(){
	int i;
	int j;
	for(i=1; i<=3; i++){
		for(j=1; j<=i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
