#include <stdio.h>
void main()
{
int i, j, a, b;
printf ("Enter number of rows: ");
scanf("%d", &a);
printf("\n");
for (i = 1; i <=a; i++)
{
for (j = 1; j <= i; j++)
{
printf(" ");
}
for (b = i; b <= a; b++)
{
printf("*");
}
printf ("\n");
}
}


