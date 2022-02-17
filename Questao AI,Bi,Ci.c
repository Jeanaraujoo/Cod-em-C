#include<stdio.h>
int main(){
	
	int A[12], B[12], iA = 0, iB = 0, i, n;
	
	while(1==1){
		printf("Digite um numero: ");
		scanf("%d",&n);
		if(iA<12 && (n%2==0 || n%3==0)){
			A[iA]=n;
			iA++;
		}
		if(iB<12 && n%5!=0){
			B[iB]=n;
			iB++;
		}
		if(iA == 12 && iB == 12){
			break;
		}
	}
	
	int C[24];
	iA=0;
	iB=0;
	
	for(i=0;i<24;i++){
		if(i%2==0){
			C[i]=A[iA];
			iA++;
		}
		else{
			C[i]=B[iB];
			iB++;
		}
	}

printf("Valores da matriz C saum: \n");
	for(i=0;i<24;i++){
		printf("%d | ",C[i]);
	}
	
	return 0;
	
}
