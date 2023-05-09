#include <unistd.h>

void ft_putchar(char a) {
   write(1, &a, 1);
}

int main(int argc, char** argv) {
   ft_putchar('a'); 
   return 0; 
}
