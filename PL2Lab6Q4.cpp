#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1, *str2, *combinedStr;
    int length1, length2;

    
    str1 = (char *)malloc(100 * sizeof(char));
    if (str1 == NULL) {
        printf("Memory allocation failed for str1\n");
        return 1;
    }

    
    str2 = (char *)malloc(100 * sizeof(char));
    if (str2 == NULL) {
        printf("Memory allocation failed for str2\n");
        free(str1);  
        return 1;
    }

    
    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = 0;  

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = 0;  

    
    length1 = strlen(str1);
    length2 = strlen(str2);

    
    combinedStr = (char *)malloc((length1 + length2 + 1) * sizeof(char));  
    if (combinedStr == NULL) {
        printf("Memory allocation failed for combinedStr\n");
        free(str1);
        free(str2);
        return 1;
    }

    
    strcpy(combinedStr, str1);

    
    strcat(combinedStr, str2);

    printf("Combined string: %s\n", combinedStr);

    
    free(str1);
    free(str2);
    free(combinedStr);

    return 0;
}

