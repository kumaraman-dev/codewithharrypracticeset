#include<stdio.h>
int q1()
{
    int a,b,c;
    printf("Enter Your Length");
    scanf("%d",&a);
    printf("Enter Your Width");
    scanf("%d",&b);
    c=a*b;
    printf("Area Of Rectangle Is %d",c);
    return 0;
}
int q2()
{
    int a,c;
    float b,d;
    printf("Enter radius ");
    scanf("%d",&a);
    b=3.14*a*a;
    printf("\nArea of circle is %f",b);
    printf("\nEnter height");
    scanf("%d",&c);
    d=2*b*c;
    printf("\nVolume of cylinder is %f",d);
    return 0;
}
int q3()
{
    float a,b;
    printf("Enter celcius");
    scanf("%f",&a);
    b=(a*9/5)+32;
    printf("Degree fharanhite is %f",b);
    return 0;
}
int q4()
{
    int p,r,t,s;
    printf("Enter Your Principle");
    scanf("%d",&p);
    printf("Enter Your Intrest Rate");
    scanf("%d",&r);
    printf("Enter Your Timeperiod");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("Your simple intrest is %d",s);
    return 0;
}