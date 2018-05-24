#include <stdio.h>
#include <cs50.h>
int main(void)
{ 
    int h, i, j;
    do
    {
        printf("Enter a non-negative integer no greater than 23: ");
        h = GetInt();
    }    
    while (h < 0 || h > 23);

     
    for (i = 0; i < h; i++) 
    {

        for (j = 0; j < h - i - 1; j++)
            printf(" ");
        for (j = 0; j < i + 2; j++)
            printf("#");

        printf("\n");
    }
    
}