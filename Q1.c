#include<stdio.h>
int main()
{
int a,b,s=0,t;
printf("Enter a Number = ");
scanf("%d",&a);
t=a;
while(a>0)
{
b=a%10;
s=(s*10)+b;
a=a/10;
}
if(t==s)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}
