// write a program to print the square of the number 

#include <stdio.h>
// function declaration 
void squareOfNum(int n);

// function defination
void squareOfNum(int n){

    printf("%d", n*n);
}
// function call
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    printf("square of that number :");
  squareOfNum(num);
    return 0;
}