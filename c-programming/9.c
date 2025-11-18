#include <stdio.h>
int main(){
    printf("%f\n",2.0*2);
    printf("%f\n",2.0/2);
    printf("%f\n",2*0.2);
    printf("%f\n",2*0.2);
    printf("%d\n", 3/2);
    printf("%f\n", 3.0/2);
    int a= 1.999999;
    printf("%d\n",a);// double se int mein convertion possible nhi hai
    int b= (int)1.999999;
    printf("%d\n",b);
    return 0;
}