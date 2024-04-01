#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void select_sort(int x[], int n)
{
    int i, indice, j, maior;
    for(i= n-1; i> 0; i--)
    {
        maior = x[0];
        indice = 0;
        for (j = 1; j <= i; j++){
            if (x[j] > maior)
            {
                maior = x[j];
                indice = j;
            }
        }
        x[indice] = x[i];
        x[i]      = maior;
    }
}



int main() {
    setlocale(LC_ALL,"Portuguese");

    int qntd;
    printf("Digite a quantidade: ");
    scanf("%i", &qntd);
	
	
	int nums[qntd];
    int i;
    for(i = 0; i < qntd; i++) {
        printf("Digite o %i° valor: ", i + 1);
        scanf("%i", &nums[i]);
    }

	select_sort(nums, qntd);
	
    printf("Valores digitados:\n");
    for(i = 0; i < qntd; i++) {
        printf("%i\n", nums[i]);
    }
    
    

    return 0;
}



