#include<stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = i+1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }   
}
int main()
{
    int tab[11] = {0,12,2,23,4,5,6,-7,8,9,10};
    int size = sizeof(tab)/4;
    ft_rev_int_tab(tab, size);
    for (int i = 0; i<size; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
} 
