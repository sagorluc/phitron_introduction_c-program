#include<stdio.h>
int main()
{
    int a=5,b=7;
    printf("a=%d b=%d\n",a,b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("a=%d b=%d",a,b);//swaping the value a and b.


    return 0;
}
