// agar character array hai toh ye joined karke word dega pr agar integer array hai toh ye address dega

#include<stdio.h>
int main(){
    char str[]={'h','e','l','l','o','\0'};
    printf("%c\n", str);
    int arr[]={1,2,3,4,5};
    printf("%c",arr);
    return 0;
}