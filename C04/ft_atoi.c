#include <stdio.h>

int array_to_int(int *digits, int n, int sign)
{
    int i;
    int value;

    i = 0;
    value = 0;
    while (i < n)
    {
        value = value + digits[i]*(10^(n - 1 - i));
        i++;
    }
    return (value * sign);
}

int get_number(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    return 11;
}

int is_sign(char c)
{
    if (c == '+')
        return 1;
    else if (c == '-')
        return -1;
    return 0;
}

int ft_atoi(char *str)
{
    int sign;
    int i;
    int j;
    int digits[10];

    sign = 1;
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        if (is_sign(str[i]) != 0)
            sign = sign * is_sign(str[i]);
        while (get_number(str[i+j]) < 10)
        {
            digits[j] = get_number(str[i+j]);
            printf("%i",get_number(str[i+j]));
            j++;
        }
        if (j != 0)
            printf("im here");
            return (array_to_int(digits, j, sign));
        i++;
    }
}



int main(void){
    char str[] = " --hello 0123456789 asd";
    printf("%i",ft_atoi(str));
}