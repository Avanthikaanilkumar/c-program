#include <stdio.h>
#include <math.h>

void roots(int,int,int);
int main()
{
float a,b,c;
printf("Enter the value of a b and c:\n");
scanf("%f %f %f",&a,&b,&c);
roots(a,b,c);
return 0;
}
void roots(int a,int b,int c)
{
float d,r1,r2;
d=b*b-4*a*c;
if(d==0)
{
    printf("the roots are real and equal\n");  
      r2=-b/(2*a);
      printf("root 2 is %.1f\n",r2);
}
else if(d>0)
{
    printf("roots are real and different\n");
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("root 1 is %.1f and root 2 is %.1f\n",r1,r2 );
}
else
{
    printf("roots are imaginary\n");
}
}