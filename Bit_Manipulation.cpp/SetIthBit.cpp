
#include <iostream>
using namespace std;
int SetBit(int n, int i)
{
    int mask = 1 << i;
    int ans = n | mask;
    return ans;
   
    
}

int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    cout << "Enter bit" << endl;
    int i;
    cin >> i;
    int ans = SetBit(n, i);
    cout << ans << endl;
}