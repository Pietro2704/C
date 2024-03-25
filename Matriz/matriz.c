#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char elementos[9] = {'A','B','C','D'};
    
    // Percorre Linha
    int linha = 1;
    while(linha <= strlen(elementos)){
        
       // Percorre Coluna
       int coluna = 1;
       // Percorre Elemento
       int i = 0;
        while(coluna <= strlen(elementos)){
            printf("\nLinha %i na coluna %i elemento %c", linha, coluna, elementos[i]);
            coluna++;
            i++;
        }
       
       printf("\n");
       linha++;
   }
}
