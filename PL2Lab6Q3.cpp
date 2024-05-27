#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name;
    char firstName[50];
    char lastName[50];
    int totalLength;

    
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    name = (char *)malloc((strlen(firstName) + 1) * sizeof(char));
    if (name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    strcpy(name, firstName);

    
    totalLength = strlen(firstName) + strlen(lastName) + 2; 

    
    name = (char *)realloc(name, totalLength * sizeof(char));
    if (name == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }


    strcat(name, " ");
    strcat(name, lastName);

    printf("Full name: %s\n", name);

    
    free(name);

    return 0;
}

