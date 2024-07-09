/******************************************************************************

Welcome to GDB Online.
  GDBl online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    float num1,num2,c;
    printf("1.Addition\n 2.substraction\n 3.multiplication\n 4.Division \n");
    scanf("%d",&choice );
    printf("Enter your choice \n Enter your choice\n");
    scanf("%f%f",&num1,&num2);
    switch(choice){
        case 1:
        c=num1+num2;
        printf("%f",c);
        break;
        case 2:
        c=num1-num2;
        printf("%f",c);
        break;
        case 3:
        c=num1*num2;
        printf("%f",c);
        break;
        case 4:
        c=num1/num2;
        printf("%f",c);
        break;
        
    

        
    }
    

    return 0;
}