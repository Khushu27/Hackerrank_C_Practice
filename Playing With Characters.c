#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char se[40];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", &se);
    printf("%c\n%s\n%s",ch,s,se);
    
    return 0;
}
