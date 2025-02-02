#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// this code not work in the case of duplicate array and sorted array 
int findPivot(vector<int>a){
    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e){
            return s;
        }
        mid=s+(e-s)/2;
        if(a[mid]>a[mid+1]&& mid+1<=e){
            return mid;
        }
        else if(a[mid]<a[mid-1]&& mid-1>=s){
            return mid-1;
        }
        else if(a[mid]<a[s]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return -1;

}
int main(){
    vector<int>a{9,10,2,4,6,8};
    int ans=findPivot(a);
    cout<<a[ans]<<endl;
    
    return 0;
}