#include<stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    char *start = dest;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
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