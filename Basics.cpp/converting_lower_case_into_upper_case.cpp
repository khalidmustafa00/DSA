#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void convertintoUpper(char a[])
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] - 'a' + 'A';
    }
}
int main()
{
    char a[10];
    cin >> a;
    convertintoUpper(a);
    cout << a << endl;

    return 0;
}