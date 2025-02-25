#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


void ft_putchar (char a){

write (1, &a, 1);

}

int main() {
    int len = ft_strlen("Hello World");  
    ft_putchar(len + '0'); 
}