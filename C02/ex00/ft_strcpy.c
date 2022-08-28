#include<stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
/* int main()
{
    char src[5]="01234";
    char dest[5]="00000";
    printf("before function call dest=");
    for (int i = 0; i<sizeof(dest); i++)
    {
        printf("%c",dest[i]);
    }
    printf("\n");
    ft_strcpy(dest, src);
    printf("after function call dest=");
    for (int i = 0; i<sizeof(dest); i++)
    {
        printf("%c",dest[i]);
    }
    printf("\n");
} */