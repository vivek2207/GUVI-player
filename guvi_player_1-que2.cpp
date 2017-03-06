#include<stdio.h>

int main(){
	
	long int n, fact=1;
	
	scanf("%ld", &n);
	
	for(int j=1; j<=n; j++){
		fact=fact*j;
	}
	
	printf("%ld is factorial of %ld", fact, n);
}
