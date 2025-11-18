//

#include <stdio.h>
int main(){
    int age ;
    printf("enter age :");
    scanf("%d", &age);

    if(age >18){
        printf("adult\n");
        printf("they can vote");
        printf("they can drive");
    }
    else {
        printf("not adult");
         printf("they cannot vote\n");
        printf("they cannot drive\n");
    }
    printf("thank you");
    return 0;
}
