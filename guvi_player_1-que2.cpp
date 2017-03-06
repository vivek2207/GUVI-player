#include<stdio.h>

int main(){
	
	long int num, fact=1;
	
	scanf("%ld", &num);
	
	for(int i=1; i<=num; i++){
		fact*=i;
	}
	
	printf("%ld is factorial of %ld", fact, num);
}
