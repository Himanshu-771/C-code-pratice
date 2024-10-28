#include <stdio.h>

int main() {
    int n = 50;        // Declare an integer variable
    int *p;                 // Declare a pointer to an integer

    p = &n;            // Store the address of 'number' in pointer 'p'

    printf("Value of number: %d\n", n);
    printf("Address of number: %p\n", &n);
    printf("Value of pointer p (address of number): %p\n", p);
    printf("Value at the address stored in p: %d\n", *p);

    return 0;
}
