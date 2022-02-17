#include<stdio.h>
int main(){
	int x;
printf("escreva um numero: ");
scanf("%d",&x);
if (x % 4== 0){
 if (x % 5== 0){
 	printf (" %d E divisivel por 4 e 5",x);	
 }
 printf (" %d E devisivel apenas por 4",x);
}
else if (x % 5== 0 ){
	printf("%d E divisivel por 5",x);
}
else{
	printf("%d Nao e divisivel por 4 nem 5",x);
}
	
	
	
	
	
	
	
	
	
	return 0;
}
