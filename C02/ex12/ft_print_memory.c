#include <stdio.h>
#include <unistd.h>
#include <string.h>

void print_address(int *addr)
{
    int div;
    int mod;

    div = *addr;
    while (div > 0)
    {
        mod = (div % 10) + '0';
        div = div / 10;
        write(1, &mod, 1);
    }
}

void print_hex(int *addr)
{

}

void print_line_as_hex(int *addr)
{

}

void print_line_as_string(int *addr)
{

}

void    *ft_print_memory(void *addr, unsigned int size)
{
    int line_iter;

    line_iter = 0;
    while (line_iter < size)
    {
        print_address(addr);
        print_hex(addr);
        /* print_string(addr); */
        printf("address = %x\n", addr);
        addr += 16;
        printf("address = %x\n", addr);
        line_iter++;
    }

    
}

int main()
{
    char str[] = "this is a very small groups of characters :)  ";

    //ft_print_memory(str, 2);
}