#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=2,b=2*n-2;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j<a or j>b){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        a++;
        b--;
        cout<<endl;
    }
    for(int k=1;k<=2;k++){
        for(int l=1;l<=2*n-1;l++){
            cout<<"*";
        }
        cout<<endl;;
    }
    a=n,b=n;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j<a or j>b){
                cout<<"*";
            }
            else{cout<<" ";}
        }
        a--;
        b++;
        cout<<endl;
    }
    return 0;
}