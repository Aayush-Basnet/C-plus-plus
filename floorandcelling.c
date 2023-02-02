#include <stdio.h>
#include <math.h>
int main()
{
float n1;
int c,f;
printf("enter the real number\n");
scanf("%f",&n1);
// computing floor and ceiling function
c=ceil(n1);
f=floor(n1);
printf("the ceiling of %.2f is %d\n",n1,c);
printf("the floor of %.2f is %d\n",n1,f);
}
