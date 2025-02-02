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
int main()
{
    char name[100];
    cout << "Enter the Name: ";
    cin.getline(name, 100);
    cout << getlength(name) << endl;
    cout << strlen(name) << endl;

    return 0;
}