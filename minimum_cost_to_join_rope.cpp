#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main(){
    int a[]={4,3,2,6};
    int n=4;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(a[i]);

    }
    int ans=0;
    while(pq.size()!=1){
        int topElement=pq.top();
        pq.pop();
        int topElement1=pq.top();
        pq.pop();
        ans+=topElement1+topElement;
        int newlen=topElement1+topElement;
        pq.push(newlen);
        

    }
    cout<<ans<<endl;
    return 0;
}