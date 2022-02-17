#include<stdio.h>
int main(){
	int i;
	int A[20],B[20];
	
	// Pegando o valor 
	for(i=0;i<20;i++){
	
	printf("Digite o valor e A[i]: ");
	scanf("%d",&A[i]);
  }
	
	// Preenchendo matriz B
	for(i=0;i<20;i++){
		B[i]= A[19-i];
}
	
	// Imprimindo matriz na tela 
		for(i=0;i<20;i++){
		
	printf("Matriz A[i]= %d\n",A[i]);
}
    for(i=0;i<20;i++){
	printf("\n");
	printf("Matriz B[i]= %d\n",B[i]);
	
}
	
		return 0;
}
