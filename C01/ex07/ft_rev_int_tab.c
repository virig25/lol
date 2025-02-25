#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	degis;

	i = 0;
	while (i < (size / 2))
	{
		degis = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = degis ;
		i++;
	}
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char dizi[] = {'1', '2', '3', '4', '5'};
    int size = 5;

    ft_rev_char_tab(dizi, size);
    
    int i = 0;

    while (i < size) {

        ft_putchar(dizi[i]);  
        write(1, " ", 1); 


    }  
}