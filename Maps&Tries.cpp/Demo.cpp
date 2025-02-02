#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
bool checkCircular(node* head){
    unordered_map<node*,bool>vis;
    node* temp=head;
    while(temp!=NULL){
        if(vis.find(temp)!=vis.end()){
            vis[temp]=true;

        }
        else{
            return true;
        }
        temp=temp->next;
    }
    return false;

}
int main(){
    unordered_map<char,int>freq;
    string s="thiruvananthapuram";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        freq[ch]++;
    }
    for(auto i:freq){
        cout<<i.first<<"--"<<i.second<<endl;
    }
  
    return 0;
}