#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha, chute;
	int vidas = 3;
	
	printf("1 - Digite a senha: ");
	scanf("%i", &senha);
	
	while(vidas>0){
		
		printf("\n2 - Qual é a senha?  ");
		scanf("%i", &chute);
		
		if(senha == chute){
			printf("Acertou");
			break;
		}
		else{
			vidas--;
			if (vidas == 0){
				printf("VC perdeu");
				return 0;
			}
			printf("\nTente novamente, vc tem %i vidas: ", vidas);			
			
		}
	
	}
	
	
		
	
	return 0;
}