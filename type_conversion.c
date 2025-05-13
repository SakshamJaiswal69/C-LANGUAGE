//int and float-->float
//int and int -->int
//float and int-->float
#include <stdio.h>

int main(){
    int a=2,b=9;
    float c=b/a;
    
     /*
     //type compability is crucial in "C" language HERE is AN ExAMPLE:
     int f=5.6;
    printf("the value of a is %d\n",f);
    printf("the value of a is %f\n",f);
    */
    printf("the value of a/b is %f\n",c);

 return 0;
}