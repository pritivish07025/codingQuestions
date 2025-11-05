//Check whether a number is divisible by 5 and 11.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin >> n;
    if(n%5==0 && n%11==0){
        cout << "It is divisible by 5 and 11"<<endl;
    }
    else {
        cout<< "it is not";
    }
    return 0;
}