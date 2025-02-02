#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int finding(vector<vector<int>> a)
{
    int start_row = 0;
    int start_col = 0;
    int ans = 0;
    while (start_row <= 3&& start_col <= 3)
    {
        if (start_row == start_col || start_row + start_col == 3)
        {
            ans += a[start_row][start_col];
        }
        if(start_col==3){
            start_row++;
            start_col=0;
        }
        else{
            start_col++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> a{
        {1, 2, 3,4},
        {5, 6, 7,8},
        {9, 10, 11,12},
        {13,14,15,16},
        
    };
    
        cout << finding(a) << endl;
    
}

