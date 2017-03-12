#include<stdio.h>
#include<string.h>

int i=0;

void reverse(char *str){

	if(*str!='\0'){
	
		reverse(str+1);

		printf("%c", *str);
		
	}
	
}



int main(){
	
	char str[1000];
	
	gets(str);
	
	reverse(str);

/*	for(int i=strlen(str); i>=0; i--){
		
		printf("%c",str[i]);
		
	}
*/	
	
}
