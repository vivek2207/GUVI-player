#include<stdio.h>


int main(){
	
	int n, rem, rev=0;
	
	scanf("%d", &n);
	
	while(n){
		rem=n%10;
		
		rev=rev*10+rem;
		
		n/=10;
	}
	
	printf("%d", rev);
}
