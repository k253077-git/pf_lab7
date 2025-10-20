#include<stdio.h>

int main(){
	
	char str[20];
	printf("Enter a string: ");
	scanf("%[^1-9 ]", str);
	
	printf("You entered: %s\n", str);
	
}
