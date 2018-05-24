#include <stdio.h>
#include <cs50.h>

int main (void)
{  
    //1 minute of shower = 12 bottles
    printf ("Enter the length of time spent in shower in minutes.\n");
    int t = GetInt();
    printf ("The equivalent bottles of water is: %d\n", t*12 );
}    