#include<iostream>
using namespace std;
bool cheack(int x,int y, int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        c=y;
        b=x;
    }
    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }

}


int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(cheack(x,y,z)){
        cout<<"Pythagorean triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorean triplet"<<endl;
    }


    return 0;
}
