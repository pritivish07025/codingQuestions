// keep taking numbers as input from user until user enters an odd number

#include <stdio.h>
int main(){
    int n;
    do{
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%2 != 0){
        break; 
    }
}
while(1);
return 0;
}