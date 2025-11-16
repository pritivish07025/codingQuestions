// Minimum of Two numbers using functions 

#include <iostream>
using namespace std;
int minNum(int a,int b){ // parameters are the copy of that function
    if(a<b){
        return a;
    }
    else{
        return b;
    }
    
}
int main(){
    cout << "Minimum value is :"<< minNum(4,5)<<endl; // actual value which is pass to the function 
return 0;
}