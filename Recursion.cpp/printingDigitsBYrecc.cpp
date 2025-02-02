#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void printing(int n)
{
    if (n == 0)
    {
        return;
    }

    printing(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}
int main()
{
    int n;
    cin >> n;
    if(n==0){
        cout<<"0"<<endl;
    }
    printing(n);
    return 0;
}