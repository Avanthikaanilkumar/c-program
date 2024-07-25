/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int number;
    printf("Enter a positive number:");
    scanf("%d",&number);
    if(number<0)
    {
        printf("factorial is not defined for negative number:\n");
    }
    else
    {
        printf("factorial of %d id %d\n",number,factorial(number));
    }

    

    return 0;
}
