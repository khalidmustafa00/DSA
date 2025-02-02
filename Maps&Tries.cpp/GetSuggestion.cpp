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
void  storesuggestion(TrieNode* curr,vector<string>&temp,string &prefix){
    if(curr->isTerminal){
        temp.push_back(prefix);
    }
    for(char ch='a';ch<='z';ch++){
        int index=ch-'a';
        TrieNode* next=curr->children[index];
        if(next!=NULL){
            prefix.push_back(ch);
            storesuggestion(next,temp,prefix);
            prefix.pop_back();


        }
    }

}
vector<vector<string>>getsuggestion(TrieNode* root,string input){
    TrieNode* prev=root;
    vector<vector<string>>output;
    string prefix="";

    for(int i=0;i<input.length();i++){
        char lastchar=input[i];
        int index=lastchar-'a';
        TrieNode* curr=prev->children[index];
        if(curr==NULL){
            break;
        }
        else{
            vector<string>temp;
            prefix.push_back(lastchar);
            storesuggestion(curr,temp,prefix);
            output.push_back(temp);
            prev=curr;

        }

    }
    return output;
    
}
int main(){
  vector<string>v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");
   string input="lovi";
   TrieNode* root=new TrieNode('-');
   for(int i=0;i<v.size();i++){
    insertword(root,v[i]);
   }
   vector<vector<string> >ans=getsuggestion(root,input);
   cout<<"printing the answer"<<endl;
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<", ";
    }
    cout<<endl;
   }

    return 0;
}