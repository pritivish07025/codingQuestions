// write a polindrom number using functions

#include <stdio.h>
// function declaration 

void polindromNum(int n);

// function defination 
void polindromNum(int n){
    int rem, temp=0, original=n;
    while (n!=0){
        rem=n%10;
        temp =temp*10+rem;
        n=n/10;
    }
    if(temp==original){
        printf("it is a polindrom\n");
    }
    else {
        printf("it is not a polindrom");
    }
}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    polindromNum(num);
     return 0;
}