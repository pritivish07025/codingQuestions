//Swap two numbers without using a third variable.

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter both numbers "<< endl;
    cin>> a >>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"print a and b:"<<  a <<","<< b;

}