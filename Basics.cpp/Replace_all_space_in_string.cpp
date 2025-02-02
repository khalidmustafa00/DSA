#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void replaceSpace(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }

    }
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    replaceSpace(arr);

    cout<<arr<<endl;



    
    return 0;
}