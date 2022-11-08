#include <unistd.h>

int ft_nbrlen(long nb)
{
    int     len;
    len = 0;
    if (nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while (nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len - 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    write(1, " ", 1);
}

int ft_power(int nb, int power)
{
    int res;
    res = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    else
    {
        while (power != 0)
        {
            res *= nb ;
            --power;
        }
    }
    return (res);
}

void print_number(int nbr, int *dict_number, char **dict_text)
{
    int i;

    i = 0;
    while (dict_number[i] >= 0)/*and i < dict_size*/
    {
        if (dict_number[i] == nbr)
        {
            ft_putstr(dict_text[i]);
			break ;
        }
        i++;
    }
}

void print_trio(int nb, int nblen, int *dict_number, char **dict_text)
{
    int ones;
    int tens;
    int hundreds;

    ones = nb % 10;
    tens = (nb / 10) % 10;
    hundreds = nb /100;
    if (nb == 0)
        print_number(0, dict_number, dict_text);
    if (hundreds)
    {
        print_number(hundreds, dict_number, dict_text);
        print_number(100, dict_number, dict_text);
    }
    if(tens)
    {
        if (tens == 1)
            print_number(tens * 10 + ones, dict_number, dict_text);
        else
            print_number(tens * 10, dict_number, dict_text);
    }
    if(ones != 0 && tens != 1)
        print_number(ones, dict_number, dict_text);
    if(nblen > 0)
        if (nb != 0)
            print_number(ft_power(1000, nblen), dict_number, dict_text);
}

void convert_value(int nb, int *dict_number, char **dict_text)
{
    int nblen;
    int trio;
    nblen = ft_nbrlen(nb) / 3;
    while (nblen >= 0)
    {
        trio = nb / ft_power(1000, nblen);
        print_trio(trio, nblen, dict_number, dict_text);
        nb = nb % ft_power(1000, nblen);
        nblen--; 
    }
}

int main(void)
{
    int n = 123456789;
    int dict_number[100] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90,100, 1000, 1000000};
    char *dict_text[100] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million"};
    convert_value(n, dict_number, dict_text);
}