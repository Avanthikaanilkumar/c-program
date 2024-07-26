/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,rem,sum,a;

   printf("\narmstrong numbers are:");

  for(i=1;i<=1000;i++)
   { 
       sum=0;
       a=i;
   while(a!=0)
   {
       rem=a%10;
       sum=sum+(rem*rem*rem);
       a=a/10;
      }

   if(sum==i)
   {
        printf("%d\n",i);
   }
   }
    return 0;
}