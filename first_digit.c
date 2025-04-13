// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
// Only one line containing a number X (999 < X  ≤  9999) 1000 to 9999 : 4 digit input
#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int r = X / 1000;
    if (r % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

// last digit er jonno % korbo joto digit 1 er por toto 0.