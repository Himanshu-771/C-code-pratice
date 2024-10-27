//gcd pass by reference
#include <stdio.h>

void findGCD(int *a, int *b) {
    int temp;
    while (*b != 0) {
        temp = *b;
        *b = *a % *b;
        *a = temp;
    }
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

   
    findGCD(&num1, &num2);

    printf("GCD is: %d\n", num1);

    return 0;
}
