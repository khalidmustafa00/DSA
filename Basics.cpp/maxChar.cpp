#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
   
int main(){
   string s="iniuiieiihnoi";
   int freq[26];

   for(int i=0;i<26;i++)
   freq[i]=0;

   for(int i=0;i<=s.size();i++)
   freq[s[i]-'a']++;

   int maxf=0;
   char ans='a';

   for(int i=0;i<26;i++)
  {
    if(freq[i]>maxf)
    {
        maxf=freq[i];
        ans=i+'a';
    }
  }
   cout<<maxf<<" "<<ans<<endl;

   return 0;
}

