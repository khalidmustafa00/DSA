#include <stdio.h>
int s(int n, int a[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }
    return sum;
}

int main()
{
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    printf("Enter the array digits with space:\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The sum of array digits is %d ", s(n, a));
}