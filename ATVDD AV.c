#include <stdio.h>

int main()
{
   int x[5];
   int i;
    
    printf("Digite o valor do vetor: ");
    scanf("%d",&x[0]);
    
     if(x[0] % 2 == 0){
     	printf ("\n numero par ");
     	
	   printf("\n                 Numero inicial:  %d              ",x[0]);
    	x[1] = x[0] * x[0];
    	x[2] = x[1] * x[1];
    	x[3] = x[2] * x[2];
    	x[4] = x[3] * x[3];
    	printf("\n Result = %d",x[1]);
    	printf("\n Result = %d",x[2]);
    	printf("\n Result = %d",x[3]);
    	printf("\n Result = %d",x[4]);
    	
    	
    	
	}
     	
     	
     
    else if (x[0] % 2 != 0){
    	printf("numero impar ");
    	
	   printf("\n                 Numero inicial:  %d              ",x[0]);
    	x[1] = x[0] * x[0] + 3;
    	x[2] = x[1] * x[1] + 3;
    	x[3] = x[2] * x[2] + 3;
    	x[4] = x[3] * x[3] + 3;
        printf("\n Result = %d",x[1]);
    	printf("\n Result = %d",x[2]);
    	printf("\n Result = %d",x[3]);
    	printf("\n Result = %d",x[4]);
     	}
	
     
    

    return 0;
}
