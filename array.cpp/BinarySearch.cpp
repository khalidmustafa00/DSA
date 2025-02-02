#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s+ (e-s) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << BinarySearch(a, n, key) << endl;
    return 0;
} // BinarySearch is applicable only for ascending order array