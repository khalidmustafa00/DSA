#include <iostream>
#include <cmath>
#include <math.h>
#include <climits>
using namespace std;
int main()
{
    int n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNo)
        { // or maxNo=max(maxNo,a[i]);
            maxNo = a[i];
        }
        if (a[i] < minNo)
        { // or minNo=min(minNo,a[i]);
            minNo = a[i];
        }
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}