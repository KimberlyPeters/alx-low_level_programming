#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to multiply two numbers in string format
char* multiply(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 + len2;
    int i, j, k, carry, sum;
    char* result = (char*)malloc((len + 1) * sizeof(char));
    memset(result, '0', len);
    result[len] = '\0';
    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            sum = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        result[i + j + 1] += carry;
    }
    for (k = 0; k < len && result[k] == '0'; k++);
    if (k == len) {
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    return &result[k];
}

// Function to check if a string contains only digits
int is_digit(char* str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    char* num1 = argv[1];
    char* num2 = argv[2];
    if (!is_digit(num1) || !is_digit(num2)) {
        printf("Error\n");
        return 98;
    }
    char* result = multiply(num1, num2);
    printf("%s\n", result);
    free(result);
    return 0;
}
