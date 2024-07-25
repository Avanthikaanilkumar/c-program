/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int);
void main()
{
   
   int n, a=0;
   
   printf("sum of natural number  is : ");
   scanf("%d",&n);
   a =sum(n);
   printf("%d",a);
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
      return n+sum(n-1);
    }
}
