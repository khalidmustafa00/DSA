#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findingmissing(vector<int>&a,int n){
    int i=0;

   while(i<n){
    int index=a[i]-1;
    if(a[i]!=a[index]){
        swap(a[i],a[index]);
    }
    else{
        i++;
    }
   }
   for(int i=0; i<a.size();i++){
    if(a[i]!=i+1){
        cout<<i+1<<" ";
    }
   }

}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    findingmissing(a,n);
    return 0;
}