//Find grade based on marks (A, B, C, etc.).

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter marks "<<endl;
    cin>> n;
    if(n>90&&n<=100){
  cout<< "A++"<<endl;
    }
    else if(n>80 && n<=90){
        cout << "A" <<endl;
    }
    else{
        cout << "B";
    }
    return 0;
}