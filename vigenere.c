//#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
   char* k = argv[1]; //key

   if(argc != 2)
   {
      printf("Enter key\n");
      return 1;
   }
   for(int j = 0, c = strlen(k); j < c; j++)
   {
      if (!(isalpha(k[j])))
      {
         printf("Letters only.\n");
         return 1;
       }
   }
      string s = GetString(); //text

      int j = 0;
      int c = strlen(k);


      for(int i = 0, n = strlen(s); i < n; i++)
      {
         k[j]=tolower(k[j]);  //convert uppercase key to lower

            if (isalpha(s[i]))
            {
               if (islower(s[i]))
               {
                  int lower = ((((s[i] - 97) + (k[j%c] - 97)) % 26) + 97);   //ci = (pi + kj) % 26; i=ith letter of text, j=jth letter of key
                  printf("%c", lower );
               }

               if (isupper(s[i]))
               {
                  int upper = ((((s[i] - 65) + (k[j%c] - 97)) % 26) + 65);
                  printf("%c", upper);
               }
             j++;
            }


            else
            {
               printf("%c", s[i]);
            }
      }

      printf("\n");


}
