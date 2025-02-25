#include <unistd.h>

void ft_swap(int *a, int *b){

int degis;
degis = *a;
*a = *b;
*b = degis;
}

int main (){

    x=5;
    y=8;

    ft_swap (&x, &y);

    write (1, &x, 1);
    write (1, &y, 1);


}