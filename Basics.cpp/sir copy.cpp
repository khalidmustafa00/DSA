#include <stdio.h>
#include <math.h>

unsigned long long int sumOfPower(unsigned long long int base, long long nTerms)
{
    unsigned long long int sum = 0, term = 1;
    for(unsigned long long int i = 0; i < nTerms; i++)
    {
        sum = sum + term;
        term = term * base;
    }

    return(sum);
}

int main()
{
    unsigned long long int sum = 0, base;

    printf("The size of long long is %d bits\n", sizeof(long long)*8);

    for(int i = 2; i <= 10; i++)
    {
        sum = sumOfPower(i,41);
        printf("Sum with base %d and 41 terms = %llu. ", i, (sum));

        if(sum %2 ==0)
        {
            printf("Sum is EVEN.\n");
        }
        else
        {
            printf("Sum is ODD.\n");
        }
    }

    return(1);
}
        