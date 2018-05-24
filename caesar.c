#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter key\n");
        return 1;
        
    }
    else
    {
        int k = atoi(argv[1]);  //k=key
        string s = GetString(); //text
        
        for(int i=0; i<strlen(s);i++)
        {
            if(isalpha(s[i]))
            {
                if (islower(s[i]))
                {
                    int l = (((s[i]-97+k)%26)+97); //ci = (pi + kj) % 26
                    printf("%c",l);
                 }
                 if (isupper(s[i]))
                 {
                     int u = (((s[i]-65+k)%26)+65);
                     printf("%c",u);
                 }
            }
            else
            {
                printf("%c",s[i]);
            }
            
        }
        printf("\n");
        return 0;
    }
}