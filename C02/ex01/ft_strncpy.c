#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
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
    ft_strncpy(dest, src, 3);
    printf("after function call dest=");
    for (int i = 0; i<sizeof(dest); i++)
    {
        printf("%c",dest[i]);
    }
    printf("\n");
} */