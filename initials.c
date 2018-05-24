#include <stdio.h>
//#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    char* s = GetString();
    for (int i = 0, n = strlen(s); i < n; i++)
    {


         if (i ==  0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i] - ('a'-'A'));
            }
            else
            {
                printf("%c", s[i]);
            }
            }


        if (s[i] == ' ')
        {
            if (s[i+1] >= 'a' && s[i] <= 'z')
            {
                printf("%c", s[i+1] - ('a'-'A'));
            }
            else
            {
                printf("%c", s[i+1]);
            }

        }





    }
    printf("\n");
}
