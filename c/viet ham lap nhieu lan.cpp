#include<stdio.h>
#include<string.h>
void show(char s[100]){
	int len = strlen(s);	
	for(int i = 0 ; i < len ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32; 
		} 
	}
	printf("%s\n",s); 
} 
int main(){
	char s1[100],s2[100],s3[100];
	gets(s1);
	gets(s2);
	gets(s3);
	show(s1);
	show(s2);
	show(s3); 
	return 0; 
} 
