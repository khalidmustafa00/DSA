#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    abc(int val1,int val2):x(val1),y(new int (val2)){}
    //default dumb copy constructor;it does shallow copy
    abc(const abc &obj){
        x=obj.x;
        y=obj.y;
    }
    void print()const{
        cout<<x<<" "<<y<<" "<<*y<<endl;

    }

};
int main(){
    abc a(1,2);
    a.print();
   abc b(a);
    // abc b=a;
    // in a and b both are pointing same heap location memory or box it means if we 
    //delete heap memory for one function then it automaticaly deleted from the both memory ;
    b.print();
    *b.y=20;//doint this value of a also changed;
    b.print();
    a.print();
    return 0;
}