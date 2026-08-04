#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char palavra[n+1];
    scanf("%s", palavra);
    
    for(int i=0, j=n-1 ;i < j ;i++, j--){
        char aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }
    
    printf("%s\n", palavra);
    
    return 0;
}
