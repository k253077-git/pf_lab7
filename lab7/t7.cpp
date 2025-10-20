#include<stdio.h>

int main(){
	
	int arr1[10];
	int i,j;
	
	printf("Enter elements:\n");
	
	for(i=0;i<10;i++){
		printf("Elements at index %d: ",i);
		scanf("%d",&arr1[i]);
	}
	int num;
	printf("\nEnter number of search: ");
	scanf("%d",&num);
	
	for(i=0;i<10;i++){
		if(num==arr1[i]){
			printf("index of number %d is %d",num,i);
		}
	}
	
}
