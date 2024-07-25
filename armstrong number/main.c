/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int arm(int n)

int main()
{
    int n,sum,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=arm(n);
    if(sum==n)
    {
        printf("%d is an armstrong number",n);
    }
    else
    {
        printf("%d is not an armstrong number",n);
    }

}
int arm(int n)
{

    while(n>0)
    {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
    }

