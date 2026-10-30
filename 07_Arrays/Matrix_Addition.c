#include<stdio.h>
//Matrix addition adds the corresponding elements of two matrices.
int main(){
	int a[2][2]={{1,2}, {3,4}};
	int b[2][2]={{5,6}, {7,8}};
	int i, j;
	 for(i=0; i<2; i++){
	 	for(j=0; j<2; j++){
	 		printf("%d ", a[i][j] + b[i][j]);
		 }
		 printf("\n");
	 }
}
