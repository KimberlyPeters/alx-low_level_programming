#include <stdio.h>

int is_palindrome(int num) {
    int reversed = 0;
    int temp = num;

    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return num == reversed;
}

int main() {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;

            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", largest_palindrome);
    fclose(file);

    return 0;
}
