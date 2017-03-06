#include<stdio.h>

int main(){
	
	int num1,  num2, i, flag=0, count=0;
	scanf("%d%d", &num1, &num2);
	if(num1==1)
		num1++;
	for(; num1<=num2; num1++){
		flag=0;
		
		for(i=2; i<=num1/2; i++){
			if(0==num1%i){
				flag=1;
				break;
			}
		}
		
		if(flag==0)
			count++;
	}
	printf("%d prime numbers", count);
	return 0;
}
