// string topic 

#include <iostream>
#include <cstring>
using namespace std ;
int main(){
    char str[]={'a','b','c','\0'};
    cout<< str<<endl;
    cout << strlen(str)<<endl;
    return 0;
}

// NOTE : agar \0 nhi lagayenge toh ye abc≡@  dega 
// isko lagane pr sirf abc dega 