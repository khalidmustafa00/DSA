#include<iostream>
using namespace std;
bool checkpowerof2(int n){
    if((n&(n-1))==0){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int n;
    cin>>n;
    bool ans=checkpowerof2(n);
    cout<<ans<<endl;

    return 0;
   
    }