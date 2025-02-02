#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main(){
    int n=6;
    int prices[]={2,8,6,9,4,7};
    sort(prices, prices + n);
    int amount=0;
    int buy=0;
    int free=n-1;
    while(buy<=free){
        amount+=prices[buy];
        buy++;
        free--;
        free--;

    }
     cout<<amount<<endl;

    return 0;
}