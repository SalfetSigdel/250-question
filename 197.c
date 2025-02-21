#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    //declaring character pointer
    char *buffer;
    
    //allocating memory at run time
    buffer = (char*)malloc(MAX*sizeof(char));
    if(buffer==NULL)
    {
        printf("Error in allocating memory!!!\n");
        return -1;
    }
    
    //assign any string
    strcpy(buffer,"Hello, World");
    //printing
    printf("buffer: %s", buffer);
    
    //freeing memory
    free(buffer);
    
    return 0;
}
