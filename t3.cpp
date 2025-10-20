#include <stdio.h>

int main(){
	
	int i,j,n;
	
	printf("Enter the range: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Elements at %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int found=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){    // no self comparision
			if(arr[i]==arr[j]){
			printf("Number %d ", arr[i]);
            found = 1;
            break;
        }
		}
	}
	if(found){
		printf(" found more than once.");
	}
}
