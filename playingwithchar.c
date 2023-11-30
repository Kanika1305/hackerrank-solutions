#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   char ch;
   char sen[100];
   char s[100];
    scanf("%c", &ch) ; 
    printf("%c\n", ch); 
    scanf("%s\n",&s);
    scanf("%[^\n]%*c", &sen);
printf("%s\n", s);
printf("%s", sen);
return 0;
}