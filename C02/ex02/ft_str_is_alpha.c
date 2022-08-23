#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {

        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return 0;
    }
    return 1;
}
int main()
{
    for(int i = 0; i<256; i++)
    {
        char str[6] = "abcde";
        str[5] = i;
        //printf("%i = %i\n", i, ft_str_is_alpha(str));
        if (ft_str_is_alpha(str) == 1)
            printf("%c",i);
    }
    printf('\n');
}