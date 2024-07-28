/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int,int);
void main()
{
    int a,b,p;
    printf("Enter the base value:");
    scanf("%d",&a);
    printf("Enter the power value:");
     scanf("%d",&b);
     p=power(a,b);
     printf("%d is the value",p);
}
int power(int a,int b)
{
if(b==0){
return 1;
}
else
{
    return (a*power(a,b-1));
}

    

}