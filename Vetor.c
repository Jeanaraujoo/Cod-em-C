#include<stdio.h>
int main(){
float c;
float vet[30];
float t;
float i;

printf ("escreva a primeira temperatura: ");
scanf ("%f",&t);
printf ("escreva c: ");
scanf ("%f",&c);
vet[0]= t;

for(i=1;i<=30;i++){

vet[i] = vet[i-1] * (1 + c/100);
}
printf ("%f",vet[i]);


printf (vet)
}




	
	
	
	
	
	return 0;
}
