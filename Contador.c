#include <stdio.h>

int main() {
    int total, i, x;
    
    printf ("Digite um numero: ");
    scanf ("%d", &x);
    
    total = 0;
      for (i = 1; i <= 100; i++){
       total+= x++;
}
    printf(" O resultado eh %d\n", total);
    
    return 0;
}
