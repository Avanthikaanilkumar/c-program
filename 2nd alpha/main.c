/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    char n='A';
  
  for(i=0;i<=5;i++){
   
  
  for(j=-1;j<i;j++){
  
      printf("%c ",n);
      
  }
  printf("\n");
  n++;
  }

    return 0;
}