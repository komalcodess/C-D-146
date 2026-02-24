#include <stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("%d \n",p); //address of x
    printf("%d \n",*p);// value at x
    printf("%d \n",&x); //address of x
    printf("%d",&p); //address of p
}
