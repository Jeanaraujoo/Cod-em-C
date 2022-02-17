#include<stdio.h>
int main(){

int A[10];
int B[10];
int i;

for(i=0;i<10;i++){
printf("Digite o primeiro numero: ");
scanf("%d",&A[i]);
}


for(i=0;i<10;i++){
if(A[i]%2==0){
	A[i]= A[i] * 5;
	printf("\n A[%i] Valor mutiplicado: %d",i,A[i]);
}


else if (B[i]= A[i] + 5)
printf("\n B[%i] Valor somado: %d",i,B[i]);
}


 return 0;
}
