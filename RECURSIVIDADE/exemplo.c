#include <stdio.h>

void tabuada(int num, int i){
    
    if(i<=10){
        int result = num *i;
        printf("%i X %i = %i\n", num,i,result);
        i++;
        tabuada(num,i);
    }
    
    
}

int main()
{
    tabuada(8,3);

    return 0;
}
