// print table using function 

#include <stdio.h>
// function declaration
void table();
// function defination 
void table(){
    int n;  // in this code i declare all the things inside the function
    printf("enter a number or the table \n");
    scanf("%d", &n);
    printf("table of that number :\n");
    for(int i=1 ; i<=10; i++){
        
        printf("%d \n",n*i);

    }
}

int main(){
    table(); // function call 
    return 0;
}