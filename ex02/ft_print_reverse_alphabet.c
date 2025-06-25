#include <stdio.h>

void ft_print_reverse_alphabet(void) {
    char* c = "z";
    
    while (c >= 'a') {
        printf("%s", c);
        c--;
    }
}

int main() {
    ft_print_reverse_alphabet();

    return 0;
}