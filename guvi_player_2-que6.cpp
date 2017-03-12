#include<stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	
	
	int arr[n], i, numxor=0;
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		numxor=numxor^arr[i];
	}
	
	printf("%d\n", numxor);
	
	
}
