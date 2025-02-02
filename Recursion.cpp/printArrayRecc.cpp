#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

void findMax(int a[], int n, int i, int &maxi)
{
    // pass by reference;
    if (i >= n)
    {
        return;
    }
    if (a[i] > maxi)
    {
        maxi = a[i];
    }
    findMax(a, n, i + 1, maxi);
}
void findMin(int a[], int n, int i, int &mini)
{
    if (i >= n)
    {
        return;
    }
    if (a[i] < mini)
    {
        mini = a[i];
    }
    findMin(a, n, i + 1, mini);
}

int main()
{
    int a[5] = {20, 30, 40, 60, 50};
    int n = 5;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;
    findMax(a, n, i, maxi);
    findMin(a, n, i, mini);
    cout << maxi << endl;
    cout << mini << endl;

    return 0;
}