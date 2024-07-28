/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void prime();
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    prime(n);
}

void prime(int n)
{
    int i,count;
    if(n==1)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        for(i=2;i<n/2;i++)
        {
            count=0;
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d is a prime number",n);
        }
    }
    
}