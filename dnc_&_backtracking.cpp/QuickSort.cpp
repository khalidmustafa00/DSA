#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int s,int e){
    //step 1: choose pivot element
    int pivotindex=s;
    int pivotelement=a[s];
    //step 2: find right position for pivot element and place it there
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<=pivotelement){
            count++;
        }
    }
    //jab main loop se bhr aya to pivot element ki right index mere pass thi
    int rightindex=s+count;
    swap(a[pivotindex],a[rightindex]);
    pivotindex=rightindex;
    //left me chhote right me bde
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(a[i]<=pivotelement){
            i++;
        }
        //if any element we fond which is greater than pivotindex in left side or greater than in right side
        //then we stop i, j and swap it  
        while(a[j]>pivotelement){
            j--;
        }
        // 2 case ho skte hai
        //A:you found the element to swap
        //B:no need to swap
        if(i<pivotindex && j>pivotindex){
            swap(a[i],a[j]);
        }
    }
    return pivotindex;


}
void QuickSort(int a[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition logic
    int p=partition(a,s,e);
    //recursive call
    //left
    QuickSort(a,s,p-1);
    //right
    QuickSort(a,p+1,e);


}
int main(){
    int a[]={8,1,3,4,1,1,1,20,50,20,20,30};
    int n=12;
    int s=0;
    int e=n-1;
    QuickSort(a,s,e);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}