#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    int curleangth=0,maxLength=0;
    int i=0;
    while(1)
    {
        if(a[i]==' '|| a[i]=='\0')
        {
            maxLength=max(maxLength,curleangth);
            curleangth=0;
        }
        else{
            curleangth++;
        }
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLength;
    
    return 0;
}