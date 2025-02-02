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
    while (start <= end)
    {
        if (a[start] < 0)
        {
            start++;
        }
        else if (a[end] > 0)
        {
            end--;
        }
        else{
            swap(a[start],a[end]);
        }
    }
    for (auto num : a)
    {
        cout << num << " ";
    }
    return 0;
}