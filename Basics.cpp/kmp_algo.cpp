#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //lps vector hmko ye btayega ki given index tk longest prefix and suffix kitne h
    //ABCDEABCD;
    //000001234;
    //lps[]={0,0,0,0,0,1,2,3,4};
    //as we can see that at index 5 A =A, at index 6 AB=AB;at index 7 ABC=ABC;at index 3 ABCD=ABCD;prefix=suffix;
    //ABCABDABCABCABD;
    //000120123453(!0 ATTENTION)
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    int i=0,j=1;
    int n=str.size();
    vector<int>lps(n,0);//Longest Prefix Suffix;
    while(j<n){
        if(str[i]==str[j]){
            i++;
            lps[j]=i;
            j++;
        }
        else{
            if(i==0){
                lps[j]=0;
                j++;
            }
            else{
                i=lps[i-1];
            }
        }
    }
    for(auto i:lps){
        cout<<i<<" ";
    } 
}
