#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

   TrieNode(char d){
    this->data=d;

     for(int i=0;i<26;i++){
        children[i]=NULL;


    }
    isTerminal=false;
   }
    
};
void insertword(TrieNode* root,string word){
    cout<<"Insertin: "<<word<<endl;
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children!=NULL){
        child=root->children[index];

    }
    else{
        root->children[index]=child;
    }
    insertword(root,word.substr(1));

}
int main(){
    TrieNode* root =new TrieNode('-');
    insertword(root,"codding");
    return 0;
}