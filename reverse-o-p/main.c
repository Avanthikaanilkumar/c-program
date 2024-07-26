/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,r,rev=0,rem,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
     while(num>0)
     {
         rem=num%10;
         r=(r*10)+rem;
         num=num/10;
     }
     printf("The reversed number is%d",temp,rev);

    return 0;
}
