#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            cout << index << endl;
            
        }
        else
        {
            nums[index] *= -1;
        }
    }
    

    return 0;
}