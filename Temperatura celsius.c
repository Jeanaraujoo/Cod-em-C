#include <stdio.h>
int main (void)
{
  //declara��o de vari�veis do tipo inteiro
  int a, b, Result;
  
  printf("n1: ");
  scanf("%d", &a); 
  
  printf("n2: ");
  scanf("%d", &b); 
  Result = a + b;
  
  
  printf("Result = %d\n", Result); 
  
  system ("pause");
  return(0);
}

