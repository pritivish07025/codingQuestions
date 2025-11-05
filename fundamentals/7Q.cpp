//Calculate the area of a rectangle, circle, and triangle.

#include <iostream>
using namespace std ;
int main(){
    int l , b ;
    float r ,base ,h;
    cout << "Enter length:"<<endl;
    cin>> l;
    cout << "Enter breadth:"<<endl;
    cin>> b;
    cout << "Enter radius:"<<endl;
    cin>>r;
    cout << "Enter base:"<<endl;
    cin>>base;
    cout << "Enter height :"<<endl;
    cin>>h;
    int ractangle = l*b;
    cout<<"Area of the rectangle :"<< ractangle <<endl;
    float circle =3.14* r*r;
    cout<<"Area of the circle :"<< circle<<endl;
    float  triangle= (0.5)* base * h;
    cout<<"Area of the triangle  :"<< triangle <<endl;

}