#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int x,y,z=0;
        cin>>x>>y;
        int *a[x];
    while(x--){
        int n;
        cin>>n;
        a[z]=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[z][i];
        }
        z++;
    }
    while(y--){
        int b,c;
        cin>>b>>c;
        cout<<a[b][c]<<endl;
    }
     
    return 0;
}
//input format
//2 2
//3 1 5 4
//5 1 2 8 9 3
//0 1
//1 3

