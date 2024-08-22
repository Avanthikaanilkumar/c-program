/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct vehicle{
    char n1[50],n2[50],n3[50];
    int a;
    };


int main()
{
    struct vehicle v[100];
    int option,i=1,b,j=0,x,k,c;
do{
                x:
                printf("\n 1:Vehicle Registration:");
                printf("\n 2:Display Vehicle");
                printf("\n 3:Exit");
                printf("\nEnter your option: ");
                 scanf("%d", &option);
                switch(option)
        {
    case 1:
                printf("Enter the vehicle owner name:");
                scanf("%s",v[i].n1);
                printf("Enter your vehicle name:");
                scanf("%s",v[i].n2);
                printf("Enter your vehicle model:");
                scanf("%s",v[i].n3);
                 printf("Enter number of tyres:");
                scanf("%d",&v[i].a);
                if( v[i].a>4||v[i].a<2)
                {
                    s:
                    printf("invalid number\n");
                    printf("valid number:");
                    scanf("%d",&k);
                    if(k>4||k<2)
                    {
                        goto s;
                    }
                    v[i].a=k;

                    
                }
                printf("Successfully Registered");
                i=i+1;
                break;
                
    case 2:
    z:
                printf("\n2 Tyres \n3 Tyres \n4 Tyres \n5exit\n");
                printf("Enter the numbers of tyres:");
                scanf("%d",&b);
                        if(b==2)
                        {
                            for(int j=1;j<i;j++)
                            {
                                if(b==v[j].a)
                            {
                        

                            
                        printf("\nvehicle owner name:%s\n",v[j].n1);
                        printf("\n vechicle name:%s\n",v[j].n2);
                        printf("\nvehicle model:%s\n",v[j].n3);
                        printf("\nNumber of tyres:%d\n",v[j].a);
                            
                        
                            }
                        }
                        goto z;
                        }
        
                        else if(b==3)
                            
                            {
                                for(int j=1;j<i;j++)
                            {
                                if(b==v[j].a)
                            
                         printf("\nvehicle owner name:%s\n",v[j].n1);
                        printf("\n vechicle name:%s\n",v[j].n2);
                        printf("\nvehicle model:%s\n",v[j].n3);
                        printf("\nNumber of tyres:%d\n",v[j].a); 
                            }
                            goto z;
                            }
                            
                        
                        else if(b==4)
                            
                            {
                                for(int j=1;j<i;j++)
                            {
                                if(b==v[j].a)
                            
                         printf("\nvehicle owner name:%s\n",v[j].n1);
                        printf("\n vechicle name:%s\n",v[j].n2);
                        printf("\nvehicle model:%s\n",v[j].n3);
                        printf("\nNumber of tyres:%d\n",v[j].a); 
                            }
                            //   if(b==4)
                            //   {
                            //       goto z;
                            //   }
                            goto z;
                            }
                        else{
                            goto x;
                        }
                        
                    
                    break;
    case 3:     
                exit(0);
                
                break;
                
    default:    printf("invalid option.Please try again\n");
                    
                
                
    goto x;            
}

}
        
while(1);

    return 0;
}


