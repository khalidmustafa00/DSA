#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int data;
    int row;
    int col;
    info(int val,int r,int c){
        data=val;
        row=r;
        col=c;
    }

};
class compare{
    public:
    bool operator()(info* a,info* b){
        return a->data>b->data;
    }

};
vector<int>mergeksortedarray(int arr[][4],int n,int k){
    priority_queue<info*,vector<info*>,compare>meanheap;
    for(int i=0;i<k;i++){
        info* temp=new info(arr[i][0],i,0);
        meanheap.push(temp);
    }
    vector<int>ans;
    while(!meanheap.empty()){
        info* temp=meanheap.top();
        int topElement=temp->data;
        int topRow=temp->row;
        int topCol=temp->col;
        meanheap.pop();
        ans.push_back(topElement);
        if(topCol+1<n){
            info* newinfo=new info(arr[topRow][topCol+1],topRow,topCol+1);
            meanheap.push(newinfo);

        }

    }
    return ans;

}
int main(){
    int k=3;
    int n=4;
    int arr[][4]={
        {2,4,6,8},
        {1,3,5,7},
        {0,9,10,11}
        
        
    };
    vector<int>ans=mergeksortedarray(arr,n,k);
    for(auto i: ans){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}