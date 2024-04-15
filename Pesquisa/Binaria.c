# include<stdio.h>
# include<stdlib.h>
# include <conio.h>
 
# define FALSO 0
# define VERDADEIRO 1
# define N 10
 
int vet[N+1]; // vetor [11]
int comeco, meio, fim, i, k;
void  OrdenaInsercao (int vet[N], int max);   
    
int main(){
	
	printf ("\n\nMetodo de pesquisa binaria \n");
	printf("\nForneca os elementos do vetor a ser pesquisado \n");
	
	// coloca 10 numeros no vetor
	for (i=1; i<=N; i++){
		printf("vet[%d]= ",i);
		scanf("%d",&vet[i]);
	}
   
    // Ordena o vetor
	OrdenaInsercao(vet,N);
	printf("\n Vetor ordenado pelo metodo de Insercao: \n");
	for (i=1; i<=N; i++){
		printf("\nvet[%d]= %d \n",i,vet[i]);
	}
   
   
  	for (i=1 ; i<=N ; i++ ){
  		printf("\nChave a ser procurada (digite -1 para terminar):");
  		scanf("%d",&k);
   
   		// Fim do programa
  		if (k == -1){
  			break;
  		}
  		
		comeco = 1; // começa em 1
	    fim = N; // fim é o tamanho de vetor
	    meio = (comeco+fim)/2; // metade do vetor
	    
        // Enquanto o numero for difretente da metade e o começo for menor que o fim
	    while (vet[meio] != k &&comeco< fim)
	    {
	     	// Se o numero for menor que o num q ta na metade
			if (k <vet[meio])
		 	 // fim agr é a metade menos 1 (está antes do meio)
	         fim = meio -1;
	    	else{
	          // Senão está depois do meio
	          comeco = meio +1;
			}
			
			meio =  (comeco+fim)/2;
	    }
	
	    // Se estiver no meio
	    if (vet[meio] == k){
	    	printf("\nA chave %d encontra-se na posicao %d do vetor \n", k, meio);
	    	break;
		}
		// Senão não existe
	    else{
	    	printf("\nA chave %d nao se encontra no vetor\n",k);
		}
		
	}
	
	// Fim
	printf ("\n\nFim do metodo de busca binaria ");
	getch();
	return 0;
	
}
 
 
// Ordenação por Inserção
void OrdenaInsercao(int vet[N], int max)
{     
	int aux, j, i;
     
	for (j=2; j<=max; j++)
    { 
		aux  = vet[j];
        vet[0] = aux;
        i = j-1;
        
        while (aux < vet[i])
        {  
			vet[i+1] = vet[i];
            --i;
        }
        
        vet[i+1] = aux;
    }
}
