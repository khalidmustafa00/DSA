#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation;
    stack<int>st;
    //insertion;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //remove
    st.pop();
    //check element on top;
    cout<<"element on the top is: "<<st.top()<<endl;
    //size;
    cout<<"size of stack: "<<st.size()<<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }


    return 0;
}