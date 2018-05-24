#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
   float a; //change
   int b, c;  
   do
   {
    printf ("Change owed: ");
    a = GetFloat();       
   }
   while (a < 0 );
   //25
   b = round(a*100);
   c = (b/25);
   c = round(c);
   b = b%25;
   //10
   c = c+b/10;
   c = round(c);
   b = b%10;
   //5
   c = c+b/5;
   c = round(c);
   b = b%5;
   //1
   c = c+b ;
   
   printf("%d\n", c);
   
   
   
}