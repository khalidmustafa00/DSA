#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count_prime(vector<bool>prime,int n){
    int ans=0;
    if(n==0){
        return false;
    }
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j=i*2;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
        
    }
    return ans;
    

}
int main(){
    int n;
    cin>>n;
    vector<bool>prime(n,true);
    int ans=count_prime(prime,n);
    cout<<ans<<endl;
    return 0;
}