#include <stdio.h>
int main(){
    int age =22;
    int *ptr=&age;
    printf("%p\n",&age);
    printf("%u\n",ptr);
    printf("%u",&ptr);
    printf("%d\n",age);
    printf("d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
}