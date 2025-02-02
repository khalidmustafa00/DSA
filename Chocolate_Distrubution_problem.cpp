#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int main(){
    int n=8;
    int M=5;
    int a[]={3,4,1,9,56,7,9,12};
    int diff=INT_MAX;
    sort(a,a+n);
    int i=0;
    int j=M-1;
    while(j<n){
        int newDiff=a[j]-a[i];
        diff=min(diff,newDiff);
        j++;
        i++;

    }
    cout<<"Answer is : "<<diff<<endl;



    return 0;
}