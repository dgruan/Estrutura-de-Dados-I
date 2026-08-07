#include <stdio.h>

int main()
{
    int tam;
    
    printf("Tamanho do vetor : ");
    scanf("%d", &tam);
    
    int nums[tam];
    
    for(int i=0;i<tam;i++) {
        scanf("%d", &nums[i]);
    }
    
    int k = 0;
    
    for(int i=0;i<tam;i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    for(int i=k;i<tam;i++) {
        nums[i] = 0;        
    }
    
    for(int i=0;i<tam;i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
