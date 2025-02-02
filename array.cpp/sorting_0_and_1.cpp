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
    int s = 0;
    int e = a.size() - 1;
    while (s <= e)
    {
        if (a[s] == 0)
        {
            s++;
        }
        else if (a[e] == 1)
        {
            e--;
        }
        else
        {
            swap(a[s], a[e]);
        }
    }
    for (auto value : a)
    {
        cout << value << " ";
    }
    return 0;
}