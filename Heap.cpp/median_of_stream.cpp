#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int signum(int a,int b){
    if(a==b){
        return 0;

    }
    if(a>b){
        return 1;
    }
    if(a<b){
        return -1;
    }
}
void callMedian(double &median,priority_queue<int>&maxheap,
    priority_queue<int,vector<int>,greater<int>>&minheap,int element
){
    switch (signum(minheap.size(),maxheap.size())){
        case 0:
         if(element>median){
            minheap.push(element);
            median=minheap.top();

        }
        else{
            maxheap.push(element);
            median=maxheap.top();

        }
        break;
        case 1:
          //maxheap.size()<minheap.size()
        if(element>median){
            int minTop=minheap.top();
            minheap.pop();
            maxheap.push(minTop);
            minheap.push(element);
             median=(maxheap.top()+minheap.top())/2.0;

        }
        else{
            maxheap.push(element);
             median=(maxheap.top()+minheap.top())/2.0;

        }
        break;
        case -1:
         if(element>median){
            minheap.push(element);
            //both heap have equal size
            median=(maxheap.top()+minheap.top())/2.0;

        }
        else{
            int maxTop=maxheap.top();
            maxheap.pop();
            minheap.push(maxTop);
            maxheap.push(element);
             median=(maxheap.top()+minheap.top())/2;



        }
        break;

    }
    
}


int main(){
    int arr[12]={5,15,1,3,2,8,7,9,10,6,11,4};
    int n=12;
    double median =0;
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;

    for(int i=0;i<n;i++){
        int element=arr[i];
        callMedian(median,maxheap,minheap,element);
        cout<<"->"<<median<<" ";

    }cout<<endl;
    return 0;
}