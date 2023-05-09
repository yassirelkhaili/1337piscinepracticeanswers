#include <stdio.h>

void ft_is_negative(int n) { 
    if (n < 0) {
        printf("N"); 
    } else {
        printf("P"); 
    }
}
int main(int argc, char** argv) {
    ft_is_negative(0);
   return 0; 
}