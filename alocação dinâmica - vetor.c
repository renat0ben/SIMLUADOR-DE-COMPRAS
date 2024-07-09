
#include <stdlib.h>
#include <locale.h> 
#include <stdio.h>
int main() { 
setlocale(LC_ALL, "Portuguese");
int i, nc;
float * ptr;

printf("Digite o número de elementos\n");
scanf("%i", &nc); 
              
ptr= (float*) malloc(nc * sizeof(float));

for(i=0; i<nc; i++){
	printf("\nDigite o %dº número: ", i+1);
	scanf("%f", &ptr[i]);
}

for(i=0; i<nc; i++){
	printf("%.1f - ", ptr[i]);
}

free(ptr);



return(0);
}
