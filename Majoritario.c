#include <stdio.h>

int main()
{
    int tam;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    
    int nums[tam], indice;
    
    for(int i=0;i<tam;i++) {
        scanf("%d", &nums[i]);
    }
    
    
    for(int i=0;i<tam;i++) {
        int k = 0;
        for(int j=0;j<tam;j++){
            if(nums[j] == nums[i]) {
                k++;
            }
        }
        if(k>(tam/2)) {
            indice = nums[i];
            break;
        }
    }
    printf("%d", indice);
    return 0;
}
