#include<stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {

        if (str[i] < ' ')
            i++;
        else
            return 0;
    }
    return 1;
}
/* int main()
{
    char str[5] = "abcd2";
    printf(ft_str_is_printable(str));
} */