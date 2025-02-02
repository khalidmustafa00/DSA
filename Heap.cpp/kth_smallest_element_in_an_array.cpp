#include<iostream>
#include<queue>
using namespace std;
int getkthgreatestelement(int arr[],int n,int k){

   //creating max heap
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);

    }
    //for remaining element puah only if 
    //they are smaller than top element
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans1=pq.top();
    return ans1;

}
int getkthsmallestelement(int arr[],int n,int k){
    //creating max heap
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);

    }
    //for remaining element puah only if 
    //they are smaller than top element
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();
    return ans;
}
int main(){
    int arr[]={10,5,20,4,15,};
    int n=5;
    int k=2;
    int ans=getkthsmallestelement(arr,n,k);
    cout<<"ans is "<<ans<<endl;
    int ans1=getkthgreatestelement(arr,n,k);
    cout<<"Ans is "<<ans1<<endl;

    return 0;

}