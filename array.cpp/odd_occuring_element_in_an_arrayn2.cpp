#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int odd_occr(vector<int>a){
    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(s==e){
            return s;
        }
        else if(mid%2==0){
            if(a[mid]==a[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }

        }
        else{
            if(a[mid]==a[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
    }
}
int main(){
    vector<int>a{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans=odd_occr(a);
    cout<<a[ans]<<endl;
    return 0;
}