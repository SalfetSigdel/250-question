// C program to add two dynamic arrays

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int size = 0;

    int* dynamicArray1;
    int* dynamicArray2;
    int* dynamicArray3;

    printf("Enter the size for dynamic arrays: ");
    scanf("%d", &size);

    dynamicArray1 = (int*)malloc(size * sizeof(int));
    dynamicArray2 = (int*)malloc(size * sizeof(int));
    dynamicArray3 = (int*)malloc(size * sizeof(int));

    printf("Enter Elements of First Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", dynamicArray1 + i);

    printf("Enter Elements of Second Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", dynamicArray2 + i);

    //Now add both arrays
    for (i = 0; i < size; i++)
        *(dynamicArray3 + i) = *(dynamicArray1 + i) + *(dynamicArray2 + i);

    printf("Result of Addition: \n");
    for (i = 0; i < size; i++)
        printf("%d ", *(dynamicArray3 + i));

    printf("\n");
    return 0;
}
