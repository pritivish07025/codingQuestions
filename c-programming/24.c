// write a program to find if a character entered by user is upper case or not

#include <stdio.h>
int main(){
    char ch ;
    printf ("enter a character\n");
    scanf("&c", &ch);
    if(ch>='A' && ch<='Z'){
printf("LOWER CASE");
    }
    else if(ch>='a' && ch<='z'){
        printf("UPPER CASE");
    }
    else{
        printf(" not english letter");
    }
    return 0;
}