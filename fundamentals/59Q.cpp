// print number from 1 to  n 

#include <iostream>
using namespace std ;
void printNums(int n){
    // recurstion 
    if(n==1){
        cout<<"1 \n";
        return ;
    }
    cout<<n<<"";
    printNums(n-1);
}
int main(){
    printNums(4);
    return 0;
}
