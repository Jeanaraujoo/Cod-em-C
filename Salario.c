#include<stdio.h>

int main(){

float salario, aumento;

printf("Digite o salario:");
scanf("%f",&salario);

if(salario<=1000){
aumento = (0.4 * salario) + salario;
printf("Salario com aumento = %.2f\n",aumento);
}

else if (salario > 1000){
aumento = (0.3 * salario) + salario;
printf("Salario com aumento = %.2f\n",aumento);
}
return 0;
}
