//write a program to calculate perimeter of traingle , take sides a&b from the user
#include <stdio.h>
int main(){
    int l, b, h;
    printf("enter length\n");
    scanf("%d",&l);
    printf("enter breadth\n");
    scanf("%d",&b);
    printf("enter height\n");
    scanf("%d",&h);
    int perimeter =2*(l+b)*h;
    printf("%d", perimeter);
}