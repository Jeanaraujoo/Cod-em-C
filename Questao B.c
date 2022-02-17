#include<stdio.h>
int main(){
	int x,y;
	
printf ("Digite um numero para tabuada: ");
scanf("%d",&y);
	
  // Tabuda de 0 a 10 \*
  for (x=0; x<=10; x++)
  {
	printf(" %d X %d = %d   \n",x,y,y*x);
  }
	
	return 0;
}
