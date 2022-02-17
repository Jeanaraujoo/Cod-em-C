#include <stdio.h>

int main()
{
   int x[5];
   int i;
    
    printf("Digite o valor do vetor: ");
    scanf("%d",&x[0]);
    
     if(x[0] % 2 == 0){
     	printf ("\n numero par ");
     	
     	
     }
    else if (x[0] % 2 != 0) {
    	printf("numero impar ");
	}
     
    for(i=0;i<5;i++){
	   printf("                 Numero inicial:  %d              ",x[0]);
    	x[1] = x[0] * x[0];
    	x[2] = x[1] * x[1];
    	x[3] = x[2] * x[2];
    	x[4] = x[3] * x[3];
	}

    return 0;
}
