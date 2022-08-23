#include<stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;
    while (i < size/2)
    {
        temp = tab[i];
        tab[i] = tab[size-1-i];
        tab[size-1-i] = temp;
        i++;
    }   
}
/* int main()
{
    int tab[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(tab)/4;
    ft_rev_int_tab(tab, size);
    for (int i = 0; i<size; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
} */
