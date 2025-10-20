#include <stdio.h>

int main() {
    char str[20];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }

    printf("Number of whitespace characters: %d\n", count);

    return 0;
}

