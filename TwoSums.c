#include <stdio.h>

int main() {
	
	int tam;
	long target;
	
	scanf("%d", &tam);
	scanf("%ld", &target);

    int nums[tam];

	for(int i=0;i<tam;i++){
		scanf("%d", &nums[i]);
	}
	
	for(int i=0;i<tam;i++){
		for(int j=i+1;j<tam;j++){
			if(nums[i] + nums[j] == target){
				printf("%d %d",i,j);
		    }
	    }
	}
	return 0;
}
