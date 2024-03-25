#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char elementos[9] = {'A','B','C','D'};
    char elements[9] = {'W','X','Y','Z'};
    
    // Percorre Linha
    int linha = 0;
    while(linha < strlen(elementos)){
        
       // Percorre Coluna
       int coluna = 0;
       // Percorre Elemento
       
        while(coluna < strlen(elementos)){
            printf("\nLinha %c na coluna %c ",  elementos[linha],elements[coluna]);
            coluna++;
            
        }
       
       printf("\n");
       linha++;
   }
}
