#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
bool BinarySearchIn2D(int a[][4],int rows,int col,int target){
    int s=0;
    int e=rows*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowsIdx=mid/col;
        int colIdx=mid%col;
        if(a[rowsIdx][colIdx]==target){
            return true;
        }
        else if(a[rowsIdx][colIdx]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

        
        
    }
    return false;

}
int main(){
    int a[5][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20},
    };
    int target=19;
    int rows=5;
    int col=4;
    int ans=BinarySearchIn2D(a,rows,col,target);
    if(ans){
        cout<<"found"<<" "<<rows<<" "<<col<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

    return 0;
}