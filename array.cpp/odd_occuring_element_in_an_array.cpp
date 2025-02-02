#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>a{1,1,2,2,3,3,4,4,3,600,600,4,4};
   int ans=a[0];
   for(int i=1;i<a.size(); i++){
    ans^=a[i];;

   }
   cout<<ans<<endl;
    return 0;

}