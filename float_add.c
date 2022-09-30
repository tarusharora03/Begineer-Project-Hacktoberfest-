#include<stdio.h>
main()
{
    float a,b,c;
    printf("Enter the value for A (First Number): \n");
    scanf("%f", &a);
    printf("Enter the value for B (Second Number): \n");
    scanf("%f", &b);
    c=a+b;
    printf("The Value of A+B (Total Value): %f", c);
    return 0;
}
