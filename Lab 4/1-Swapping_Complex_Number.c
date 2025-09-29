#include <stdio.h>

struct Complex
{
    int real;
    int imag;
};

int main()
{
    struct Complex c1, c2, temp;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%d %d", &c1.real, &c1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%d %d", &c2.real, &c2.imag);

    printf("\nBefore swapping:\n");
    printf("c1 = %d + %di\n", c1.real, c1.imag);
    printf("c2 = %d + %di\n", c2.real, c2.imag);

    temp = c1;
    c1 = c2;
    c2 = temp;

    printf("\nAfter swapping:\n");
    printf("c1 = %d + %di\n", c1.real, c1.imag);
    printf("c2 = %d + %di\n", c2.real, c2.imag);

    return 0;
}
