#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int solve(int n,int arr[],int dept[])
{
    vector<pair<int,int>>data;
    for(int i=0;i<n;i++){
        data.push_back({arr[i],dept[i]});

    }
    sort(data.begin(),data.end(),cmp);
    int count=1;
    int lastDept=data[0].second;

    for(int i=1;i<n;i++){
        if(data[i].first>=lastDept){
            count++;
            lastDept = data[i].second;
        }
       

    }
    return count;


}
int main(){
    int n=4;
    int arr[]={5,8,2,4};
    int dept[]={7,11,6,5};
    int ans=solve(n,arr,dept);
    cout<<"Answer is : "<<ans<<endl;

}