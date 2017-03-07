#include<stdio.h>

#include<stdlib.h>

int main(){
	
	char str[100];
	int num=0, n, i;
	
	gets(str);
	
	for(i=0; str[i]!='\0'; i++){
	
		n=str[i]-'0';
		num=num*10+n;
	//	num=(str[i]-'0')*10+num;
		
	}


//	num=atoi(str);
	
	printf("%d", num);
	






}
