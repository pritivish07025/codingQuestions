// print natural numbers

#include <stdio.h>
int main(){
    int n;
    printf("enter a numbers\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n", i);
    }
    printf("reverse numbers\n");
    for(int i=10;i>=1;i--){
        printf("%d\n",i);
    }
    printf("Alphabets \n");
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
    int j=1;
    while(j<=5){
        printf("hello while \n");
        j++;
    }
    
    return 0;
}