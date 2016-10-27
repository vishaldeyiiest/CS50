#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void upper_string(char s[]) {
   int c = 0;
 
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
int main()
{
    string name = GetString();
    upper_string(name);
     printf("%c", name[0]);
    for(int i = 0; i < strlen(name)-1; i++)
    {
        if(name[i] == ' ')
            printf("%c", name[i+1]);
    }
    printf("\n");
}