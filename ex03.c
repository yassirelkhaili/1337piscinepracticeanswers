#include <stdio.h>

void ft_print_numbers(void) { 
    int i = 0; 
    while (i <= 9) {
        printf("%d", i); 
        i++; 
    }
}
int main(int argc, char** argv) {
    ft_print_numbers(); 
   return 0; 
}