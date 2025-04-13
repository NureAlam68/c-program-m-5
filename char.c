// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
// Note : difference between 'a' and 'A' in ASCII is 32 .
#include <stdio.h>
int main()
{
    char X;
    scanf("%c", &X);
    if (X > 96)
    {
        printf("%c", X - 32);
    }
    else
    {
        printf("%c", X + 32);
    }
    return 0;
}