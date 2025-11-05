//Find the largest among three numbers.

#include <iostream>
using namespace std ;
int main(){
    int a,b,c;
    cout<<"Enter first , second & third number :"<<endl;
    cin>>a  >> b >> c;
    if(a>b&& a>c){
        cout << "a  is greater " << a <<endl;
    }
     else if (b>a && b>c){
        cout << "b  is greater :"<< b <<endl;
    }
    else {
        cout << " c  is greater " << c;
    }

    return 0;

}