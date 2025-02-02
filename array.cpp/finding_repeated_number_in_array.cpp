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
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
        }
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cout << nums[i] << endl;
        }
    }
    for (auto value : nums)
    {
        cout << value << " ";
    }
    return 0;
}