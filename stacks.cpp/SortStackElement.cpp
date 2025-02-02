#include<iostream>
#include<stack>
using namespace std;
void insertElement(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }
    int topElement=s.top();
    s.pop();
    insertElement(s,target);
    s.push(topElement);
}
void sort(stack<int>&s){
    //base case 
    if(s.empty()){
        return;
    }
    int topElement=s.top();
    s.pop();
    sort(s);
    insertElement(s,topElement);


}
int main(){
    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    sort(s);
   while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
   }
    
    return 0;
}