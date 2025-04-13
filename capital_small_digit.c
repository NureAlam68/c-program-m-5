// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (X >= 'a' && X <= 'z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}