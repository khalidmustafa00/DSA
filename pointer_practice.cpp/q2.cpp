#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    char *ptr;
    char str[]="abcdefg";
    ptr=str;
    ptr+=5;
    cout<<ptr<<endl;
    cout<<*ptr;
    
    return 0;
}