// check whether user can vote or not

#include <iostream>
using namespace std ;
int main(){
    int age;
    cout<<"enter user age"<<endl;
    cin>> age;
    if(age>18){
        cout<< "user can vote"<< endl;
    }
    else {
        cout<< "user can't vote";
    }
    return 0;
}