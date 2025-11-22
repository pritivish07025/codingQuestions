//string 

#include <iostream>
using namespace std;
int main(){
    char str[]={'h','e','l','l','o','\0'};
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<str[2]<<endl;
    // agar hum character array ko string arrign kr rhe hai toh wo automatically null character hold karta hai 
    cout<<str<<endl;
    return 0;
}