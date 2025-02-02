#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            zeros += 1;
        }
        else if (a[i] == 1)
        {
            ones += 1;
        }
        else
        {
            twos += 1;
        }
    }
    cout << zeros << " " << ones << " " << twos << endl;
    int k = 0;
    while (zeros--)
    {
        a[k] = 0;
        k++;
    }
    while (ones--)
    {
        a[k] = 1;
        k++;
    }

    while (twos--)
    {
        a[k] = 2;
        k++;
    }
    for (auto num : a)
    {
        cout << num << " ";
    }
    return 0;
}