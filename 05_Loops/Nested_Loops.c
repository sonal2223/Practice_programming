#include<stdio.h>
//A nested loop is a loop placed inside another loop.
int main(){
	int i;
	int j;
	for( i=1; i<=3; i++){
		for(j=1; j<=2; j++){
			printf("* ");
		}
	   printf("\n");
	}
}
