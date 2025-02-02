#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    char a[20];
    int i;
    for( i=0;i<10;i++){
        *(a+i)=65+i;

    }
    *(a+i)='\0';
    cout<<a;
    
    return 0;
}