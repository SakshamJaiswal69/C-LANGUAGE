
// #include <stdio.h>
// union high{
//     int a;
//     int b;
// };
// int main()
// {
//     union high * ptr;
//     union high var ;
//     printf("enter the value:\n");
//     scanf("%d",&var.a);
//     var.a ;
//     ptr = &var;
//     printf("The Value of a is :%d",ptr ->a);
//     return 0;
// }
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

}