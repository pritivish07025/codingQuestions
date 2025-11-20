// write a function to print n terms of the fibonacci sequence

#include <stdio.h>
int fib(int n);
int main(){
    return 0;
}
int fib(int n){
    if(n==0 ){
            return 0;
        
    }
    IF(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib of %d",n,fibN);
    return fibN;
}
