// addition of two number using function 

#include <iostream>
using namespace std ;
int addNum( int a, int b){
 int sum =a+b;
return sum;
}
int main(){

cout<<addNum(5,10)<<endl;
cout<< (10+5);// ye toh aaise bhi ho sakta tha but fir bhi maine function ka use kiya kyunki baar baar redundancy ka focus karke agar hume kisi kaam ko baar baar repeat karana hai toh hum baar baar code nhi likhenge hum uskp repeat karayenge 
return 0;
}