#include <stdio.h>

void ft_print_alphabet(void) { 
    char i = 'a';  
    while(i <= 'z') {
        printf("%c", i); 
        i++; 
    } 
}
int main(int argc, char** argv) {
    ft_print_alphabet(); 
   return 0; 
}