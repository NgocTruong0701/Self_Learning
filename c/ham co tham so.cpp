#include<stdio.h>
#include<string.h> 
void show(char str[100]){
	printf("Hello %s",str); 
} 
int main(){
	char str[100]; 
	gets(str);
	show(str);
	return 0; 
} 
