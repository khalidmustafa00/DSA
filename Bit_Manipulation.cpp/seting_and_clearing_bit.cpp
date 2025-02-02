#include <iostream>
using namespace std;

void ClearBit(int &n, int i)
{
    int mask1 = ~(1 << i);
    n = n & mask1;
}

void updateBit(int &n, int i, int target)
{
    ClearBit(n, i);
    int mask = target << i;
    n = n | mask;
    cout << "After updating: " << n << endl;
}

int main()
{
    int n = 10;
    updateBit(n, 0, 1);
    return 0;
}
