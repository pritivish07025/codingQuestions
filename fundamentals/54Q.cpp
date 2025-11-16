//FUNCTION use 

#include <iostream>
using namespace std;

int  printHello(){
    cout<<"hello\n";
    return 3;  // return hum kuch bhi kara sakte hai and chahe toh us return value ko print bhi kara sakte hai 
}
int main(){
 // function call
 int val =printHello();  // is waale vale line mein humne return value ko print karaya hai 
 cout << printHello()<<endl;
 cout <<"val ="<< val <<endl;
 return 0;
}