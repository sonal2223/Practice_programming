#include<stdio.h>
//A two-dimensional array stores data in rows and columns.
int main(){
	int number[2][2]={{1,2},{3,4}};
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", number[i][j]);
		}
		printf("\n");
	}
}
