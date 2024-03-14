#include<stdio.h>
#include<stdlib.h>

// Recursividade
void num(int inicio, int fim){
    
    if(inicio<=fim){
        
        if(inicio%2==1){
            printf("%i\n",inicio);
        }
        inicio++;
        
        num(inicio,fim); // Função sendo chamada nela mesma
    }
}

main(){
        
    int inicio;
    printf("Digite o comeco: ");
    scanf("%i", &inicio);

    int fim;
    printf("Digite o fim: ");
    scanf("%i", &fim);

    /*
	int i;
	for(i=inicio; i<=fim; i++){
		if(i%2==1){
			printf("\n%i", i);
		}
	}
    */

    num(inicio,fim);
}