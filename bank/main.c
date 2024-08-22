/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>





struct choice{
    char n1[50], n2[50];
    float x;
    int a;
};

int main()
{
    struct choice c[100];
    int option,i=0,b,de,wi,j,d;
    

// switch(option)

do{
    

        printf("\n1. Create Account\n");
        printf("2. Display Balance\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch(option)
        {
    case 1:
    
                    printf("Enter your name:");
                    scanf("%s", c[i].n1);
                    printf("\nEnter your place:");
                    scanf("%s", c[i].n2);
                    printf("Enter your phone number:");
                    scanf("%d", &c[i].a);
                    for(j=0;j<100;j++)
        {
                    if(j!=i&&c[j].a==c[i].a)
            {
                    printf("already exits.\nPlease try a new code.");
                    scanf("%d",&d);
                    c[i].a=d;
            }
        }
                    
                    printf("Enter initial amount:");
                    scanf("%f", &c[i].x);
                    i=i+1;
                    printf("successfully created");
                    break;
    case 2:
                    printf("enter your phone number:");
                    scanf("%d",&b);
                    
                        
            
                    for(i=0;i<100;i++)
                    {
                        if(c[i].a==b)
                        {
                        printf("\nname%s\n",c[i].n1);
                        printf("\nplace:%s\n",c[i].n2);
                        printf("\nphone number:%d\n",c[i].a);
                        printf("\ninitial amount:%lf\n",c[i].x); 
                        }
                        
                    }
                    break;
    case 3:
                    printf("Enter your phone number:");
                    scanf("%d",&b);
                    for(i=0;i<100;i++)
                    {
                        if(c[i].a==b)
                        {
                             printf("Enter your deposit:");
                            scanf("%d",&de);
                            c[i].x+=de;
                            printf("%lf balance:",c[i].x);
                            
                        }
                    }
                    break;

 
                        
    case 4:
                    printf("Enter your phone  number:");
                    scanf("%d",&b);
                    for(i=0;i<100;i++)
                    {
                        if(c[i].a==b)
                        {
                             printf("Enter your withdraw:");
                            scanf("%d",&wi);
                            if(wi>c[i].x)
                             {
                             printf("insufficient");
                            }
                            else
                            {
                         c[i].x=c[i].x-wi;
                         printf("\nbalance%lf\n",c[i].x);  
                         }
                
                         }
          
                        }
                    break;
    case 5:
                    printf("Exit");
                    exit(0);
                     break;
                    }

    
}


while(option!=5);

return 0;
}
