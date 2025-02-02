#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>v,int key){
    int ans=-1;
    int s=0;
    int e=v.size()-1;
     int mid=(s+e)/2;
    while(s<=e){
       
        if(v[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(v[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
          mid=(s+e)/2;

    }
    return ans;
}
int main(){
    int key;
    cin>>key;
    vector<int>v{1,3,3,3,4,4,4,5,5,5};
    int ans=firstOcc(v,key);
    cout<<ans<<endl;

    return 0;
}