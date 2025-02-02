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
    int maxi = INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        maxi = max(a[i], maxi);
    }
    cout << maxi << endl;
    vector<int> a1(maxi+1,-1);
    for (int i = 0; i < a.size(); i++)
    {
        if (a1[a[i]] == -1)
        {
            a1[a[i]] = a[i];
        }
        else
        {
            cout << a[i] << endl;
            break;
        }
    }
    for(auto i:a1){
        cout<<i<<" ";
    }

    return 0;
}