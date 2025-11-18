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
 cout << printHello()<<endl; // YE WAli line se ye samjh aaya ki hum return value ko bina kisi variable mein store karaye bhi usko print kara sakte hai 
 cout <<"val ="<< val <<endl;
 return 0;
}