#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {0, 0, 1, 1, 0, 1, 0, 1, 0, 1};
    int start = 0;
    int end = a.size() - 1;
    
    while (start<= end)
    {
        if (a[start] == 0)
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