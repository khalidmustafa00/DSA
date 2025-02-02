#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin >> n;
    if (n & 1)
    {
        cout << "N is ODD" << endl;
    }
    else
    {
        cout << "N is EVEN" << endl;
    }
}