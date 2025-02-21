// C program to find the size of union

#include <stdio.h>

union MyUnion {
    int num1;
    float num2;
};

int main()
{
    union MyUnion UN;

    printf("Size of union: %ld", sizeof(UN));

    UN.num1 = 10;
    printf("\nNum1: %d, Num2: %f", UN.num1, UN.num2);

    UN.num2 = 10.34F;
    printf("\nNum1: %d, Num2: %f", UN.num1, UN.num2);

    return 0;
}
