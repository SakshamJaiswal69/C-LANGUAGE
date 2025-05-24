<<<<<<< HEAD
#include <stdio.h>
union high{
    int a;
    int b;
};
int main()
{
    union high * ptr;
    union high var ;
    printf("enter the value:\n");
    scanf("%d",&var.a);
    var.a ;
    ptr = &var;
    printf("The Value of a is :%d",ptr ->a);
    return 0;
=======
#include <stdio.h>
union high{
    int a;
    int b;
};
int main()
{
    union high * ptr;
    union high var ;
    printf("enter the value:\n");
    scanf("%d",&var.a);
    var.a ;
    ptr = &var;
    printf("The Value of a is :%d",ptr ->a);
    return 0;
>>>>>>> ea522f5577ce28428b9466e3da2065401ee02aef
}