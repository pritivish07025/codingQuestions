//WRITE A PROGRAM TO CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT


//armostron number : ye wo number hota hai jisme har ek number mein kitne digits hai utne time multiply karne pr jab wahi number wapis return aaye toh wo armstrong kehlata hai 
  

//steps to solve 
//---------------------


// sabse pehle ek number input lenge 
// un number mein unki counding chech karenge
// then unka multiply karke unka sum nikalenge 
// check karenge ki ki sum given number ke equal aa rha hai nhi

#include <stdio.h>
int main(){
    int n;
    int rem, temp=0, count=0;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n!=0){
     rem=n%10;
     temp=temp*10+rem;
     n=n/10;
     count++;
    }
     return 0;
}