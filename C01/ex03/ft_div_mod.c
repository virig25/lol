

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    
    if (b != 0){
    *div = a / b; 
    *mod = a % b; 
    }
}

void ft_putnbr(int nbr) {
    char c;
    c = nbr + '0';  
    write(1, &c, 1);     
}

int main() {
    int a = 17;
    int b = 5;     
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);  

    ft_putnbr(div);  
    write(1, " ", 1);  
    ft_putnbr(mod);  

    write(1, "\n", 1);  

    return 0;
}
