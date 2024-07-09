/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=2,i,j,n=6;
    for(i=1;i<n;i++){
    for(j=0;j<i;j++){
    printf("%d ",a);
    a=a+2;
    }
    printf("\n");
    }

    return 0;
}