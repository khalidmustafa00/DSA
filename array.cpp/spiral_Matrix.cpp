#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &a)
{
    vector<int> ans;
    int m = a.size();
    int n = a[0].size();
    int count = 0;
    int total_elements = m * n;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m - 1;
    int endingCol = n - 1;

    while (count < total_elements)
    {
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            ans.push_back(a[startingRow][i]);
            count++;
        }
        startingRow++;
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(a[i][endingCol]);
            count++;
        }
        endingCol--;
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(a[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(a[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
}
int main()
{
    vector<vector<int>> a{
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
    };
    spiralOrder(a);

    return 0;
}