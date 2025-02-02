#include <iostream>
using namespace std;
int ClearBit(int n, int i)
{
    int mask = ~(1 << i);
    int ans = n & mask;
   
}

int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    cout << "Enter bit" << endl;
    int i;
    cin >> i;
    int ans = ClearBit(n, i);
    cout << ans << endl;
}