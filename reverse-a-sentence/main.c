/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverseSentnce();

void main()
{
    printf("Enter a Senetence:");
    reverseSentence();

}
void reverseSentence()
{
    char ch;
    scanf("%c",&ch);
    if(ch!='\n'){
        reverseSentence();
        printf("%c",ch);
    }
}
