#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool palindrom(char a[]){
     int s=0;
    int n=strlen(a);
    int e=n-1;
    while(s<=e ){
        if(a[s]!=a[e]){
            return false;
        }
        else{
            s++;
            e--;
        } 
    }
    return true;

}

int main(){
    char a[100];
    cin>>a;
    if(palindrom(a)){
        cout<<"palindrom char"<<endl;
    }
    else{
        cout<<"not palindrom"<<endl;
    }

   
    



    return 0;
}