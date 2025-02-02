#include<iostream>
using namespace std;
int DecimalTobinary(int n)
{   int ans=0;
    int x=1;
    while(n!=0)
    {ans+=(n%2)*x;
    x*=10;
    n/=2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<DecimalTobinary(n)<<endl;

    return 0;
}