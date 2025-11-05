//Check whether a number is even or odd.

#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<< "Enter Number :"<<endl;
    cin >> n;
    if(n%2==0){
        cout<<"number is even"<<endl;
    }
    else {
        cout << "number is odd ";
    }
}