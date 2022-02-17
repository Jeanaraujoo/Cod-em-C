#include<stdio.h>
int main(){

int x,i;
x=1;
int result;
for(x=1;x<=10;x++){
	if(x % 2 != 0){
		result = 1;
	}
 for(i = 1; i<= x; i++){
  result= result * i;	
 }	
printf("Resultado de %d = %d\n",i,result);
}
	
	
	
		
	
	
	return 0;
}
