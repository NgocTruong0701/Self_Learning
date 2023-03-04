#include<stdio.h>
#include<string.h> 
int main(){
	char c;
	char str[100];
	gets(str); 
	scanf("%c",&c);;
	int count = 0;
	int len = strlen(str);
	for(int i = 0 ;i < len;i++) {
		if(str[i] == c){
			count++; 
		} 
	}
	printf("%d",count);
	return 0; 
	 
} 
