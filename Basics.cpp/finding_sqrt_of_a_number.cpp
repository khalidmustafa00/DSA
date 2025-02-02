#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int findSqrt(int n)
{
    int s = 0;
    int e = n;
    int target = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = findSqrt(n);
    int precision;
    cin >> precision;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * j <= n; j += step)
        {
            finalAns = j;
        }
        step /= 10;
    }

    cout << finalAns << endl;

    return 0;
}