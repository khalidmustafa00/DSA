#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int findunique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{   
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueeliment=findunique(arr);
    cout<<uniqueeliment<<endl;

    return 0;
}