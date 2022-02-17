#include<stdio.h>
int main(){
int b,p,i,x;
	
printf("Digite um numero base: ");
scanf("%d",&b);
printf("Digite um expoente: ");
scanf("%d",&x);

p = 1;


for(i=1;i<=x;i++){
	p = p * b;
}
printf("%d Elevado a %d = %d",b,x,p);


	
	
	return 0;
}
