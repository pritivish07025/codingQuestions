//Find sum of first n natural numbers.

#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<< "Enter number "<< endl;
    cin>> n ;
    int sum=0;
    for(int i=0;i<n;i++){
        sum =sum+i;
        cout<<"sum of first n natural numbers" << sum << endl;
    }
}