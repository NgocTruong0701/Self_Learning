#include<stdio.h>
#include<string.h>
int main(){
	char c;
	char str[100];
	gets(str);
	scanf("%c",&c);
	
	
	
	int dem = -1; 
	for (int i = 0 ; i < strlen(str);i++){
		if(str[i] == c){ 
			dem = 1; 
			break; 
		} 
	} 
	printf("%d",dem); 
	return 0; 
} 
