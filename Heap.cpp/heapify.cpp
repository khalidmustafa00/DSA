#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int index=i;
    int largest =index;
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;
    }
    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;
    }
    if(index!=largest){
        swap(arr[largest],arr[index]);
        index=largest;
        heapify(arr,n,index);

    }


}
void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

}
void heapsort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n--]);
       
        heapify(arr,n,1);

    }

}
int main(){
    int arr[]={-1,12,15,13,11,14};
    int n=5;
    buildHeap(arr,n);
    
    cout<<"printing heap "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapsort(arr,n);
     cout<<"printing the sort heap "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
