#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fat(int n){ // RECURSIVIDADE SEM UTILIZAR FUN��ES DA BIBLIOTECA MATH.H
	
	if(n>1){
		return n * fat(n-1);
	}
	
	return 1;
}

int main(){
	
	int x;
	
	scanf("%d", &x);
	
	printf("Fatorial = %d", fat(x));
	
	return 0;
	
}
