#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main() 
{
    char ch, s[MAX_LENGTH], sen[MAX_LENGTH];
    
    scanf("%c", &ch); 
    printf("%c\n", ch);
    
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    
    scanf("%[^\n]%*c]", sen);
    printf("%s\n", sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
