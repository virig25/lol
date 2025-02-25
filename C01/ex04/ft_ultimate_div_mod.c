#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b){

char div; 
char mod;

if ( b != 0){

div = (*a / *b) ; 
mod = (*a % *b) ;
*a = div;
*b = mod;

}
}

int main () {

x = 17 ;
y = 5 ;
ft_ultimate_div_mod(&x, &y);

write (1, &x, 1);
write (1, &y, 1);

}