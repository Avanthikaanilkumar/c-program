#include <stdio.h>

int main()
{
    int a,b,product;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if((a>0)&&(b>0))
    {
        product=a*b;
        printf("The product is %d",product);
        if(product%2==0)
        {
            printf("\n %d is even ",product);
        }
        else{
            printf("\n %d is odd ",product);
        }
    }
    return 0;
}

