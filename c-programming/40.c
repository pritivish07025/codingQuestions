// write a program to print the polindrom number using loop

// polindrom number wo hota hai jiska reverse karne pr wapis se wahi number aata hai
#include <stdio.h>
int main(){
int n , rem , temp =0;
printf("enter a number :\n");
scanf("%d",&n);
 while(n!=0){
    rem =n%2;
    temp =temp*10+rem;
    n=n/10;
 }
 if(temp==n){
    printf("it is polindrom number \n");

 }
 else{
    printf("it is not polindrom number");
 }
 return 0;
}