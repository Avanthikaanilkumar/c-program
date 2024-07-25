/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void sum(int a,int b)
{
    printf("The sum is : %d\n",a+b);
}

void diff(int a,int b)
{
    printf("The difference is : %d\n",a-b);
}

void mul(int a,int b)
{
    printf("The product is : %d\n",a*b);
}

void divi(int a,int b)
{
    if(b==0){
      printf("error"); 
    }else
    {
    printf("The Quotient is : %d\n",a/b);
}
}


void main()
{
    int a,b,c,choice,x,reenter;
    
    do{
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("1.Addition \n2.Subraction \n3.Multiplication \n4.Division \n5.exit\nEnter your choice: ");
        scanf("%d",&c);
        
        switch(c)
        {
            case 1:
                sum(a,b);
                break;
            case 2:
                diff(a,b);
                break;
            case 3:
                mul(a,b);
                break;
            case 4:
                divi(a,b);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid operator!\n");
                
            
            
            
        }
        printf("Do you want to continue(1:yes)");
        scanf("%d",&reenter);
        scanf("%d",&x);
        
        
        
    }
    while(x==1);

    
}