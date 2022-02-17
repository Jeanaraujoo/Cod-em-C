#include<stdio.h>
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	int i=0;
	while(i<11){
		printf("%d X %d = %d\n",num,i,i*num);
		i++;
	}
	printf("Digite um numero (Com FOR): ");
	scanf("%d",&num);
	int j=0;
	for(j = 0; j<11; j++){
	
		printf("%d X %d = %d\n",num,j,j*num);
		
	}
	return 0;
}
