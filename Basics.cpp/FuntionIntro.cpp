#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    cout<<n<<endl;
    return ;
}
int add(int n1,int n2){
    print(n1);
    print(n2);
   int sum=n1+n2;
    return sum;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<add(n1,n2);

    
    return 0;
}
    
