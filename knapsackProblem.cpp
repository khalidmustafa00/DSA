#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    double ratio1=((1.0)*a.first)/a.second;
    double ratio2=((1.0)*b.first)/b.second;
    return ratio1>ratio2;

}
int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int capacity=50;
    int n=3;
    vector<pair<int,int>>data;
    for(int i=0;i<n;i++){
        data.push_back({val[i],wt[i]});

    }
    sort(data.begin(),data.end(),cmp);
    int Tvalue=0;
    for(int i=0;i<n;i++){
        pair<int,int>item=data[i];
        int itemValue=item.first;
        int itemWt=item.second;
        if(itemWt<=capacity){
            Tvalue+=itemValue;
            capacity-=itemWt;

        }
        else{
            int ratio=((1.0)*itemValue)/itemWt;
            int valueToadd=ratio*capacity;
            Tvalue+=valueToadd;
            capacity=0;
        }
    }
    cout<<"Total Value is: "<<Tvalue<<endl;






    return 0;
}