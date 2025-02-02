#include <iostream>
using namespace std;
int GetithBit(int n,int i){
    int mask=1<<i;
    int ans=n&mask;
    if(ans==0){
        return 0;
    }
    else{
        return 1;
    }


}

int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    cout<<"Enter bit"<<endl;
    int i;
    cin>>i;
   int ans= GetithBit(n,i);
    cout<<ans<<endl;
}