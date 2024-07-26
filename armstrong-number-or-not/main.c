/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,num,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
    r=num%10;
    sum=sum+(r*r*r);
    num=num/10;
    }
    if(sum==i)
    {
    
      printf("%d is an Armstrong Number",i);
    }
    
      else
      {
      
          printf("%d is not Armstrong",i);
      }
      
    

    return 0;
}