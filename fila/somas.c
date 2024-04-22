#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
    int nums[10];
    
    int i;
    for(i=0;i < 10; i++){
        printf("Digite o %d° elemento: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    
    for(i = 0; i < 10/2; i++){
        printf("A %d soma é: %d\n", i+1, nums[i]+nums[9-i]);
    }
    
    
    return 0;
}
