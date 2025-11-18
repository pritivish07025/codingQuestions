// keep taking numbers as input from user until user enters a number which is multiple of 7

#include <stdio.h>
int main(){
    int n;
    printf("enter a user input\n");
    scanf("%d",&n);
    do{
        if(n%7==0){
            break;
        }
    }
    while(1);
    return 0;

}