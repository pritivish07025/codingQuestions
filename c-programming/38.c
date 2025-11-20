// write a table using function to take input in the table

#include <stdio.h>
// function declaration
void table(int n);
// function defination 
void table(int n){
    for(int i=1; i<=10;i++){
    printf("%d\n", n*i);
    }
}
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    table( num);
     return 0;
}