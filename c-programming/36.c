// add two number using function
#include <stdio.h>
int sum(int a , int b);
int main(){
    int a, b;
    printf ("enter first number :\n");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    int s =sum(a,b);
    printf("sum is %d",s);
}
int sum (int a, int b){
    return a+b;
}