#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a1[6]={1,5,10,20,40,80};
   int a2[5]={6,7,20,80,100};
   int a3[8]={3,4,15,20,30,70,80,120};
   //if all element same then this code doesn't give one element;
    int i=0;
    int j=0;
    int k=0;
    while(i<6||j<5||k<8){
        if(a1[i]==a2[j] && a2[j]==a3[k]){
            cout<<a1[i]<<endl;
            i++;j++;k++;
        }
        else if(a1[i]<a2[j]){
            i++;
            
        }
        else if(a2[j]<a3[k]){
            j++;
        }
        else{
            k++;
        }
    }

    return 0;
}