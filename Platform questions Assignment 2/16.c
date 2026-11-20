//Playing with characters
//https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char g,ch;
    char sen[100];
    char s[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("%c ",&g );
    scanf("%[^\n]s", sen);
    printf("%c\n%s\n%s" , ch,s,sen);
    return 0;
}
