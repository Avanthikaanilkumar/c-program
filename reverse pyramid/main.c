/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=num;j>i;j--){
        printf("*");
        
    }
    printf("\n");
    }

    return 0;
}
