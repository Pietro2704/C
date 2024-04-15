# include<stdio.h>
# include<stdlib.h>
# include <conio.h>
 
# define FALSO 0
# define VERDADEIRO 1
# define N 10
 
int vet[N+1]; // vetor [11]
int i, k, achou;
 
int main()
{  
   printf("\nMetodo de Pesquisa Sequencial\n");  
   printf("\nForneca os elementos do vetor a ser pesquisado \n");
   
   // coloca 10 numeros no vetor
   for (i=1; i<=N; i++)
   { printf("vet[%d]= ",i);
     scanf("%d",&vet[i]);
   }
    
   while (VERDADEIRO) // Enquanto verdade
   { 
     printf("\nChave a ser procurada  (digite -1 para terminar): ");
     scanf("%d",&k);
      
     // fim do programa
     if (k==-1)
       break;    
          
     // achou eh false     
     achou = FALSO;
     
     // Enquanto achou é falso e i for menor ou igual ao tamanho do vetor
     i = 1;
     while ( achou==FALSO && i<=N ){ 
     
		 if (vet[i] == k) // Se o i achar o numero
	       { printf("\nA chave %d esta na posicao %d do vetor \n",k,i); // print num e posicao
	         achou = VERDADEIRO; // achou vira True
	       } // Senão percorre o looping
	       else    ++i;
	     }
     
     
     // Dps de percorrer o looping e o número não for achado
     if (achou==FALSO)
          printf("\nA chave %d nao se encontra no vetor \n",k);
      
   }
    
	// Fim
   printf("\n\n\nFim do programa");
   getch();
   return 0;
    
}
