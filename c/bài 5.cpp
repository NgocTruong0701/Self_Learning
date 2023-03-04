#include<stdio.h>
int main(){
	int a,b,c; 
	printf("ba canh cua tam giac lan luot la :\n");
	printf("-canh thu nhat :");
	scanf("%d",&a);
	printf("-canh thu hai :");
	scanf("%d",&b);
	printf("-canh thu ba :");
	scanf("%d",&c) ;
	if(a<b+c && b<a+c && c<a+b){
		if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b ){
			printf("tam giac nay la tam giac vuong."); 
		}
		else if (a == b && b == c){
			printf("tam giac nay la tam giac deu."); 
		} 
		else if (a == b || b == c || c == a){
			printf("tam giac nay la tam giac can."); 
		} 
		else if (a*a == a*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b && (a == b || b == c || c == a )){
			printf("tam giac nay la tam giac vuong can.");
	    }
	    else {
	    	printf("tam giac nay la tam giac thuong."); 
		} 
	} 
	else {
		printf("day khong phai la tam giac."); 
	}
	return 0; 
} 
