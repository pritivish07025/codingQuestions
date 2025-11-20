// convert farhein to celcius

#include <stdio.h>
float convertTemp(float celcius);
int main(){
float far=convertTem(32);
printf("far: %f",far);
return 0;
}
float convertTemp(float celcius){
    float far=celcius*(9.0/5.0)+32;
    return far;
}