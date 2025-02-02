#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
bool isPrime[1000];
void seive()
{
    fill(isPrime, isPrime + 1000, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i < 1000; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j < 1000; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main(){
    seive();
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
   // time comlexity is nlog(log(n));

}