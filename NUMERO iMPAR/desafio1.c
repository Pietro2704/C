#include<stdio.h>
#include<stdlib.h>

main(){
		
	int inicio;
	printf("Digite o comeco: ");
	scanf("%i", &inicio);
	
	int fim;
	printf("Digite o fim: ");
	scanf("%i", &fim);
	
	int i;
	for(i=inicio; i<=fim; i++){
		if(i%2==1){
			printf("\n%i", i);
		}
	}
	
	
}