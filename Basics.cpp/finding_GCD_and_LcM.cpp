#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//gcd(a,b)=gcd(b,a%b);
//gcd(a,0)=a;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findgcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return findgcd(b, a % b);
}
int findGcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
//lcm(a,b)*gcd(a,b)=a*b;{use this formula for finding lcm}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int ans = findGcd(n1, n2);
    cout << ans << endl;
    return 0;
}
