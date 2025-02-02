#include<iostream>
using namespace std;

int main(){
    // const with pointer;
    // const int *a=new int(2);//const data non-constant pointer;
    int const *a=new int(2);//same as line no 6;
    cout<<*a<<endl;
    //cant change content of pointer;
    int b=10;
    a=&b;//pointer itself can be rassigned
    cout<<*a<<endl;

    cout<<"2nd output......"<<endl;
    // constant pointer non constant data
    int *const c=new int(3);
    cout<<*c<<endl;
    *c=20;
    cout<<*c<<endl;

    cout<<"3rd ouput..."<<endl;
    //constant pointer and constant data;
    const int *const e=new int (7);
    cout<<*e <<endl;
    return 0;
}