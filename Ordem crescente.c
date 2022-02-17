
#include<stdio.h>
int main(){
	int A,B,C;
	int maior,meio,menor;
	printf("digite o primeiro valor: ");
	scanf("%d",&A);
	printf("digite o segundo valor: ");
	scanf("%d",&B);
	printf("digite o terceiro valor: ");
	scanf("%d",&C);
	if(A>B){
		if (A>C){ 
			maior = A;
			if(B>C){
				meio = B;
				menor = C;
			}
			else{
				meio = C;
				menor = B;
			}
		}
		else{
			maior = C;
			meio = A;
			menor = B;
		}
	}
	else if(B>C){
		maior = B;
		if (A > C){
			meio = A;
			menor = C;
		}
		else{
			meio = C;
			menor = A;
		}
	}
	else {
		maior = C;
		meio = B;
		menor = A;
	}
	
	printf("A ordem eh: %d, %d, %d", menor, meio, maior);
	return 0;
}
