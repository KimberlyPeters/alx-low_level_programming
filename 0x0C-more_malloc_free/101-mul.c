#include <stdlib.h>

int str_len(char *str)
{
    int len = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            len++;
        else
            exit(98);
        str++;
    }
    return len;
}

int power(int base, int exp)
{
    int result = 1;
    while (exp--)
        result *= base;
    return result;
}

int str_to_int(char *str)
{
    int result = 0;
    int len = str_len(str);
    while (*str)
    {
        result += (*str - '0') * power(10, len - 1);
        len--;
        str++;
    }
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }
    int num1 = str_to_int(argv[1]);
    int num2 = str_to_int(argv[2]);
    int result = num1 * num2;
    printf("%d\n", result);
    return 0;
}

