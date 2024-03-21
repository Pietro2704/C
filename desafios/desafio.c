#include<stdio.h> //print(), scanf()
#include<stdlib.h> // system ()
#include<locale.h> // local

// Fazer um programa no qual o usuário digite o início e o fim de um intervalo e o programa deve exibir todos os números ímpares no intervalo. 

// Fazer um programa que force o usuário a digitar um número par para finalizar o programa. 
// Enquanto o usuário estiver digitando um número ímpar
// o programa fica repetindo a mensagem "Digite um número par para finalizar".

// Faça um programa que exiba a tabuada até 10 de um número digitado pelo usuário.
/*
int main(){
    int num, init, fim, i, result;
    setlocale(LC_ALL,"Portuguese");

    printf("Tabuada: ");
    scanf("%i", &num);
    
	printf("\nInício: ");
	scanf("%i", &init);

	printf("\nFim: ");
	scanf("%i", &fim);
	
	system("cls");
	
	if(init > fim){
		
		for(i = init; i >= fim; i--){
    		result = num * i;
    		printf("%i  X  %i  =  %i\n", num, i, result);
		}
		
	}else{
	
		for(i = init; i <= fim; i++){
    		result = num * i;
    		printf("%i  X  %i  =  %i\n", num, i, result);
		}
		
	}

    system("pause");

}
*/
// Faça um programa que peça para o usuário digitar um número de acordo com o número digitado, o programa deve exibir a frase bom dia "n" vezes, conforme o número digitado pelo usuário.

// Faça um programa que receba um número digitado pelo usuário e informe se o número é primo ou não.

// Faça um jogo da forca. O jogador 1 deve cadastrar uma palavra e o jogador 2 deve tentar adivinhar.
// O jogador 2 deve informar uma letra de cada vez. Se acertar, a letra é revelada nas posições que contém a letra.
// Se errar, a letra deve ser salva num vetor que armazenará os erros. O jogador 2 pode errar 5 vezes.
// Caso saiba, a palavra secreta, ele pode digitar a palavra de uma só vez, porém se errar perde o jogo.
