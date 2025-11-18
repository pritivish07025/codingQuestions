// write a program to print the average of 3 numbers

#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the first value\n");
    scanf("%d",&a);
     printf("enter the second value\n");
    scanf("%d",&b);
     printf("enter the third value\n");
    scanf("%d",&c);
    int avg=(a+b+c)/3;
    printf("average of three numbers:%d",avg);
}