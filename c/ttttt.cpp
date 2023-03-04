#include<stdio.h>
#include<math.h>
int n; 
void nhap(){
	do{
		printf("Nhap so nguyen duong n khong qua 18 chu so : ");
		scanf("%d",&n);
		if(n<0 ||n>pow(10,18)){
			printf("Nhap sai."); 
		}	
	}  
	while(n <0 || n> pow(10,18)); 
} 
void xuly(int n){
	int dem=0,check;
	int tac,tac1; 
	if(n <10){
		printf("\nYES"); 
	} 
	else{
		while(n >= 10){
			tac= n%10;
			n=n/10;
			tac1 =n%10; 
			if(tac ==tac1 || tac == tac1-1 || tac == tac1+1){
				check = 1; 
			} 
			else{
				printf("\nNo") ;
				break; 
			} 		
		}
		if(check == 1){
			printf("\nYES"); 
		} 
	}
} 
int main(){
	nhap();
	xuly(n);
	return 0; 
} 


