#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
int is_valid_number(char *str);
int multiply(char *num1, char *num2, char *result);
void reverse_string(char *str);
void remove_leading_zeros(char *str);

int main(int argc, char *argv[]) {
    // Check if the number of arguments is correct
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    // Check if the arguments are valid numbers
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    // Perform the multiplication
    char result[1000];
    multiply(argv[1], argv[2], result);

    // Print the result
    printf("%s\n", result);

    return 0;
}

// Check if a string represents a valid number (i.e., contains only digits)
int is_valid_number(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

// Perform multiplication on two numbers represented as strings
int multiply(char *num1, char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize the result to zero
    for (int i = 0; i < len1 + len2; i++) {
        result[i] = '0';
    }
    result[len1 + len2] = '\0';

    // Multiply digit by digit and add the carry
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int prod = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
            carry = prod / 10;
            result[i + j + 1] = (prod % 10) + '0';
        }
        result[i] += carry;
    }

    // Remove leading zeros
    remove_leading_zeros(result);

    // Reverse the string
    reverse_string(result);

    return 0;
}

// Reverse a string
void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Remove leading zeros from a string
void remove_leading_zeros(char *str) {
    int len = strlen(str);
    int i = 0;
    while (i < len - 1 && str[i] == '0') {
        i++;
    }
    memmove(str, str + i, len - i + 1);
}

