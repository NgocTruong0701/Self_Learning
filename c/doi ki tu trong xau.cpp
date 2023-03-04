#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	for(int i = 0 ; i < strlen(str);i++){
		if(str[i] == '3'){
			str[i] = 'e'; 
		} 
	} 
	printf("%s",str);
	return 0; 
} 
