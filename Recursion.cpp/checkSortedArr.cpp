#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool checkSorted(vector<int>&a,int i,int& n){
    if(i==n-1){
        return true;
    }
    if(a[i+1]<a[i]){
        return false;
    }
     checkSorted(a,i+1,n);
}
int main(){
    vector<int>a{2,6,7,9,12,11};
    int i=0;
    int n=a.size();
    bool isSorted=checkSorted(a,i,n);
    if(isSorted){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}