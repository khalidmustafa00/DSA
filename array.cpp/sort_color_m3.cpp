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
    int start = 0;
    int end = a.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (a[start] == 0)
        {
            swap(a[start], a[i]);
            i++;
            start++;
        }
        else if (a[start] == 1)
        {
            start++;
        }
        else
        {
            swap(a[start], a[end]);
            end--;
        }
    }
    for (auto num : a)
    {
        cout << num << " ";
    }
    return 0;
}