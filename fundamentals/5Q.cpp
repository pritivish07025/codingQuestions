//swap two number using third variable 

#include <iostream>
using namespace std;
int main(){
    int a, b, temp;
    cout<<"Enter a first number "<<endl;
    cin>>a;
    cout<<"Enter a second number "<<endl;
    cin>>b;
    cout<<"Before swapping both numbers: "<<a <<","<<b << endl;

    temp =b;
    b=a;
    a=temp;
    cout <<"After swapping both numbers:"<<a <<","<<b;
}