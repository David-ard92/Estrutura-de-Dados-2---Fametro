#include <stdio.h>

void ponteiros(int *n1, int *n2){

    *n1 = 5;
    *n2 = 10;    
}

int main (){
    int n1, n2;
  
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &n1, &n2);
    
    ponteiros (&n1, &n2);
    
    printf ("Os números via ponteiro são %d e %d", n1, n2);

return 0;
} 
