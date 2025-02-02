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
        this->isTerminal=false;

    }

};
void insertword(TrieNode* root, string word){
    // cout<<"inserting :"<<word<<endl;
    
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        child=root->children[index];


    }
    else{
        child=new TrieNode(ch);
        root->children[index]=child;
    }
    insertword(child,word.substr(1));
}
bool searchword(TrieNode* root,string word){
    
    if(word.length()==0){
        return root->isTerminal;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
     if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        return false;
    }
    searchword(child,word.substr(1));
}
int main(){
    TrieNode* root=new TrieNode('-');
    insertword(root,"coding");
    insertword(root,"coder");
    insertword(root,"coder");
    insertword(root,"codehelp");
    insertword(root,"baba");
    insertword(root,"baby");
    insertword(root,"babu");
    insertword(root,"shona");
    if(searchword(root,"coding")){
        cout<<"present"<<endl;

    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}