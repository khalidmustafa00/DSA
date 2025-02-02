#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findingQuotient(int n1,int n2){
    int s=0;
    int e=abs(n1);
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(abs(mid*n2)==abs(n1)){
            ans= mid;
            break;
        }
        else if(abs(mid*n2)>abs(n1)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }

    }
   if(n1>0 && n2>0 || n1<0 && n2<0){
    return ans;
   }
   else{
    return -ans;
   }
}
int main(){
    int n1;
    cout<<"Enter dividend."<<endl;
    cin>>n1;
    int n2;
    cout<<"Enter divisor."<<endl;
    cin>>n2;
    int ans=findingQuotient(n1,n2);
    cout<<ans<<endl;
    return 0;
}