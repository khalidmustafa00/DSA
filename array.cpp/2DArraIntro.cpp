#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                cout << i << "," << j << endl;
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "Element found\n";
    }
    else
    {
        cout << "Element not found\n";
    }

    return 0;
}