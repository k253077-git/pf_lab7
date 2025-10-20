#include <stdio.h>
int main(){
	
int arr[9],sum=0;

for(int i=0;i<9;i++){
	printf("enter the number : ");
	scanf("%d",&arr[i]);
	sum+=arr[i];
} 

    printf("The sum is: %d",sum);
}
