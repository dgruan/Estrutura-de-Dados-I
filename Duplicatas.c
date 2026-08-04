#include <stdio.h>

int main()
{
    short tam;
    int k=1;
    
    printf("Digite o tamanho do seu vetor: ");
    scanf("%hd", &tam);
    
    int nums[tam];
    
    for(int i=0;i<tam;i++){
        printf("Digite um numero para inserir na posicao %d do seu vetor: ", i);
        scanf("%d", &nums[i]);
    }
    
    for(int i=1;i<tam;i++){
        if(nums[i] != nums[i-1]){
            k++;
        }
    }
    
    printf("%d\n", k);
    
    printf("%d ", nums[0]);
    
    for(int i=1;i<tam;i++){
        if(nums[i] != nums[i-1]){
            printf("%d ", nums[i]);
        }
    }
    
    return 0;
}
