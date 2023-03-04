#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("nhap mot ki tu bat khi : ");
	ch=getche() ;
	if (ch=='a'||ch=='A'){
		printf("\nDay la nguyen am : %c",ch);
	} 
	else if (ch=='o'||ch=='O'){
		printf("\nDay la nguyen am : %c",ch); 
	} 
	else if (ch=='u'||ch=='U'){
		printf("\nDay la nguyen am : %c",ch);
	} 
	else if (ch=='e'||ch=='E'){
		printf("\nDay la nguyen am : %c",ch);
	} 
	else if (ch=='i'||ch=='I'){
		printf("\nDay la nguyen am : %c",ch);
	} 
	else{
		printf("\nDay la khong phai nguyen am");
	} 
	return 0; 
} 
