#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void Bolha(int x[], int n)
{
    int i, j, temp;
    for(i= 0; i< n-1; i++){
    	
    	for(j= 0; j< n-1; j++){
    		
    		if(x[j] > x[j+1]){
        		temp = x[j];
        		x[j] = x[j+1];
        		x[j+1] = temp;
			}
		}
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

	Bolha(nums, qntd);
	
    printf("Valores digitados:\n");
    for(i = 0; i < qntd; i++) {
        printf("%i\n", nums[i]);
    }
    
    

    return 0;
}



