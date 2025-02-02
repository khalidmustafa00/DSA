#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinarySearchInNearlySortedArray(vector<int>a,int target){
    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(mid-1 >=0&&a[mid-1]==target){
            return mid-1;
        }
        else if(mid+1 <a.size() && a[mid+1]==target){
            return mid+1;
        }
        else if(a[mid]>target){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
        
    }
    return -1;
}
int main(){
    int target;
    cin>>target;
    vector<int>a{10,3,40,20,50,80,70};
    int ans=BinarySearchInNearlySortedArray(a,target);
    cout<<ans<<endl;
    return 0;
}