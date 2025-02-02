#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&a,int s,int e,int& key){
    int mid=s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]<key){
        return binarySearch(a,mid+1,e,key);
    }
    else{
        return binarySearch(a,s,mid-1,key);
    }
}
int main(){
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"Take input of array."<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int s=0;
    int e=n-1;
    int ans=binarySearch(a,s,e,key);
    cout<<ans<<endl;
    return 0;
}