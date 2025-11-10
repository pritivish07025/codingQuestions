//Print multiplication table of a given number.

#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout <<"Enter a number "<< endl;
    cin>> n;
    for(int i =1;i<=10;i++){
        cout<<"table :"<< n*i<<endl;
    }
    return 0;
}