#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //assume for creating new array
    int *left=new int[len1];
    int *right=new int[len2];
    //for copying the value of the array in left array;
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=a[k];
        k++;
    }
    //for copying the value of the array in the right array;
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=a[k];
        k++;
    }
    // to merge two sorted array after cpying the array ;
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            a[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            a[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++;

        }
    }
    while(leftIndex<len1){
        a[mainArrayIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        a[mainArrayIndex++]=right[rightIndex++];
    }
    //delete left and right array



}
void mergeSort(int *a,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //left part sort krdo
    mergeSort(a,s,mid);
    //right part sort krdo
    mergeSort(a,mid+1,e);
    merge(a,s,e);
}
int main(){
    int a[]={4,5,13,2,12};
    int n=5;
    int s=0;
    int e=n-1;
    //calling merge sort to merge two array;
    mergeSort(a,s,e);
    //printing the sorted array;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}