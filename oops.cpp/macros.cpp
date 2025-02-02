#include<iostream>
using namespace std;
#define PI 3.141;
float circleArea(float r){
    return (r*r)*PI ;
}
float circleperimeter(float r){
    return  (r)*2 *PI;
}
int main(){
    cout<<circleArea(99.90)<<endl;
    cout<<circleperimeter(23.99)<<endl;
    return 0;
}