#include<stdio.h>
int main()
{
int A,B,x,y;
printf("No of pens = ");
scanf("%d",&A);
printf("No of pencils = ");
scanf("%d",&B);
printf("Cost of pens = ");
scanf("%d",&x);
printf("Cost of pencils = ");
scanf("%d",&y);
int d=x*A+y*B;
printf("Total Amount=%d",d);
return 0;
}
