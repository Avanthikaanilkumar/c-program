/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 int sum();
   void main()

{
  
       int res;
       res = sum();
       printf("factorial of numbers :%d",res);
       
   }
   int sum()
   {
       int i,n,fact=1;
       printf("enter the limit:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           fact *= i;
       }
   return fact;
  }