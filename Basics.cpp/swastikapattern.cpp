#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2 || j==(n+1)/2 || i==1&&j<(n+1)/2 || i==n&&j>(n+1)/2 || j==n&&i<(n+1)/2 || j==1&&i>(n+1)/2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

 return 0;
}