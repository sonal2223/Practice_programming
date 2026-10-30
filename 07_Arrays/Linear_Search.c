#include<stdio.h>
//Linear search finds an element by checking each array element one by one.
int main(){
	int a[]={10,20,30,40,50};
	int key=90;
	
	int i;
	for(i=0; i<5; i++){
		if(a[i]==key){
			printf("found at index %d", i);
			return 0;
		}
	}
	printf("Not found");
}

