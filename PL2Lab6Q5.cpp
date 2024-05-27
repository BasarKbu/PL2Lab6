#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void separateNumbers(const char* studentNumber, int** oddNumbers, int* oddCount, char** evenNumbers, int* evenCount) {
    *oddNumbers = NULL;  // Dinamik int dizisi i�in ba�lang��ta NULL
    *evenNumbers = NULL; // Dinamik char dizisi i�in ba�lang��ta NULL
    *oddCount = 0;       // Tek say�lar i�in ba�lang�� say�s�
    *evenCount = 0;      // �ift say�lar i�in ba�lang�� say�s�

    int len = strlen(studentNumber);

    for (int i = 0; i < len; i++) {
        char digitChar = studentNumber[i];
        int digit = digitChar - '0';  // Karakteri tam say�ya d�n��t�r

        if (digit % 2 == 0) {
            // �ift say�
            (*evenCount)++;
            *evenNumbers = (char*)realloc(*evenNumbers, (*evenCount) * sizeof(char));
            (*evenNumbers)[(*evenCount) - 1] = digitChar;
        } else {
            // Tek say�
            (*oddCount)++;
            *oddNumbers = (int*)realloc(*oddNumbers, (*oddCount) * sizeof(int));
            (*oddNumbers)[(*oddCount) - 1] = digit;
        }
    }
}

int main() {
    char studentNumber[20];

    printf("Enter your student number: ");
    scanf("%s", studentNumber);

    int* oddNumbers = NULL;
    char* evenNumbers = NULL;
    int oddCount = 0;
    int evenCount = 0;

    separateNumbers(studentNumber, &oddNumbers, &oddCount, &evenNumbers, &evenCount);

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%c ", evenNumbers[i]);
    }
    printf("\n");

    // Dinamik olarak ayr�lan bellekleri serbest b�rak
    free(oddNumbers);
    free(evenNumbers);

    return 0;
}

