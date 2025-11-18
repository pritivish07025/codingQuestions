/*
write a program to give grades a student 
marks < 30 in C
30<= marks <70 is B
70 <= marks <90 is A
90<= marks <= 100 is A+

*/
#include <stdio.h>
int main(){
    int marks ;
    printf("enter a marks\n");
    scanf("%d",&marks);
    if(marks <=100 && marks >=90){
    printf("A+\n");
    }
     else if(marks <90 && marks >=70){
    printf("B+\n");
    }
    else if(marks <70 && marks >=30){
    printf("C+\n");
    }
    else{
    printf("D+\n");
    }

}