#include<stdio.h> //print(), scanf()
#include<stdlib.h> // system ()
#include<locale.h> // local
#include<stdbool.h> // bool

// 1)
// Fazer um programa no qual o usuário digite o início e o fim de um intervalo e o programa deve exibir todos os números ímpares no intervalo. 
/*
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
*/



// 2)
// Fazer um programa que force o usuário a digitar um número par para finalizar o programa. 
// Enquanto o usuário estiver digitando um número ímpar
// o programa fica repetindo a mensagem "Digite um número par para finalizar".
/*
bool Impar(int numero){
	if(numero % 2 == 0){
		return false;
	}
	return true;
}
bool Par(int numero){
	if(numero % 2 == 0){
		return true;
	}
	return false;
}
main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	do{
		printf("Digite um número para finalizar: ");
		scanf("%i", &num);	
	}while(Impar(num));
	
	if(Par(num)){
		printf("Programa encerrado!");
		return 0;
	}
	
}
*/




// 3)
// Faça um programa que exiba a tabuada até 10 de um número digitado pelo usuário.
/*
main(){
    int num, init, fim, i, result;
    setlocale(LC_ALL,"Portuguese");

    printf("Tabuada: ");
    scanf("%i", &num);
	
	system("cls");

	for(i = 1; i <= 10; i++){
		result = num * i;
		printf("%i  X  %i  =  %i\n", num, i, result);
	}
	

    system("pause");

}
*/




// 4)
// Faça um programa que peça para o usuário digitar um número,
// de acordo com o número digitado, o programa deve exibir a frase bom dia "n" vezes, conforme o número digitado pelo usuário.
/*
main(){
    int num, i;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite um número: ");
    scanf("%i", &num);
    
	for(i = 0; i<=num; i++){
		printf("\nBom dia!");
	}

}
*/




// 5)
// Faça um programa que receba um número digitado pelo usuário e informe se o número é primo ou não.
/*
main() {
	 setlocale(LC_ALL, "Portuguese");
	 int num, i;
	 int resultado = 0;
	 
	 printf("Digite um número: ");
	 scanf("%d", &num);
	 
	 if(num <= 1){
	 	printf("\nnão é primo\n", num);
	 	return 0;
	 }
	 
	 for (i = 2; i <= num / 2; i++) {
	    if (num % i == 0) {
	       resultado++;
	       break;
	    }
	 }
	 
	 if (resultado == 0){
	 	printf("\n é primo\n", num);
	 }
	 else{
	 	printf("\n não é primo\n", num);
	 }
    
}
*/





// 6)
// Faça um jogo da forca. O jogador 1 deve cadastrar uma palavra e o jogador 2 deve tentar adivinhar.
// O jogador 2 deve informar uma letra de cada vez. Se acertar, a letra é revelada nas posições que contém a letra.
// Se errar, a letra deve ser salva num vetor que armazenará os erros. O jogador 2 pode errar 5 vezes.
// Caso saiba, a palavra secreta, ele pode digitar a palavra de uma só vez, porém se errar perde o jogo.
main(){
	char nome[100];
	printf("Jogador 1\nDigite uma palavra: ");
	scanf(" %[^\n]", nome);
	
	system("cls");
	
	char chute[2];
	printf("Jogador 2\nFale uma letra: ");
	scanf(" %[^\n]", chute);
	
	int i;
	int tamanho = strlen(nome);
	for(i = 0; i < tamanho; i++){
		
		if(strcmp(nome[i], chute) != 1){
			printf("Existe essa letra");
		}
	}
}
