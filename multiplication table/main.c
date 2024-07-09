/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,i=1,pro;
    printf("enter the number:");
    scanf("%d",&a);
    while(i<=10)
    {
        pro=a*i;
        printf("%d\n",pro);
        i=i+1;
    }

    return 0;
}