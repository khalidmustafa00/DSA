#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void fun(int a[]){
    //{2,3,4};
    cout<<a[0]<<" ";
}
int main(){
    int a[]={1,2,3,4};
    fun(a+1);//a point on the address of 2;
    cout<<a[0];
    
    
    return 0;
}