#include <iostream>
#include <bits/stdc++.h>
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
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); i++)
        {
            if (a[i] == a[j])
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}