// C program to print alternate elements of array.

#include <stdio.h>

int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 10 };
    int i = 0;

    printf("Alternate elements of array: ");
    for (i = 0; i < 10; i = i + 2)
        printf("\n\tarr[%d] is: %d", i, arr[i]);

    printf("\n");
    return 0;
}
