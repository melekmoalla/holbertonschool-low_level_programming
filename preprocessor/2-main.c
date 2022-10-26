#include <stdio.h>

/**
 * main -  program that prints the name of the file it was compiled  
*/

int main(void)
{

    printf("%s", __FILE__);
    printf("\n");
    return (0);
}