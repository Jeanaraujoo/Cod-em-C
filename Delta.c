#include<stdio.h>
#include<math.h>
int main(){
	/* x1, x2 e delta*/
	float x1,x2,delta;
	float a,b,c;
	printf("digite o primeiro valor: ");
	scanf("%f",&a);
	printf("digite o segundo valor: ");
	scanf("%f",&b);
	printf("digite o terceiro valor: ");
	scanf("%f",&c);
	//delta = b² - 4 a * c
	delta = (b * b) - (4 * a * c);
	printf("%f\n",delta);
	if(delta < 0 ){
		printf("Nao existem raizes para delta negativo:\n");
	}
	else{
		x1 = ((b*-1) + sqrt(delta))/(2*a);
		x2 = ((b*-1) - sqrt(delta))/(2*a);
		printf("as raizes sao: %.1f, %.1f",x1,x2);
	}	
}
