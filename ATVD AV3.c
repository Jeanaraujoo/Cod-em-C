#include <stdio.h>

int main()
{
    struct cadastro{ 
        int idade;
        int nasc;
         };
    struct cadastro x[5];
     int i;
     
     for(i=0;i<5;i++){
     printf("Digite sua idade: ");
     scanf("%d",&x[i].idade);
     
     printf("Digite seu ano de nascimento: ");
     scanf("%d",&x[i].nasc);
	 }
    
    for(i=0;i<5;i++){
    	if(2021 - x[i].nasc == x[i].idade){
    		printf("\n Acesso permitido!");
		}
		
		else if( 2021 - x[i].nasc != x[i].idade){
			printf("\n Acesso negado");
		}
	}
    
    return 0;
}
