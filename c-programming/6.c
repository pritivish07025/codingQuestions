// write a program to calcute area of square (side is given)

#include<stdio.h>
int main(){
    // area of the square - side *side 

    float side , area;
    printf("Enter the value of side \n");
    scanf("%f", &side);
    area =side *side;
    printf("area of the square is :%f", area);
    return 0;
}