#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int getlength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int reverseArray(char name[])
{
    int s = 0;
    int n = getlength(name);
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int main()
{
    char arr[100];
    cin.getline(arr, 100);
    reverseArray(arr);
    cout << arr << endl;

    return 0;
}