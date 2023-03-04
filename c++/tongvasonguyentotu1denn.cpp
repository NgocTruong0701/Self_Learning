#include<iostream>

using namespace std;

int n; 
int tong = 0;
int count = 0; 

void input(){
	cout<<"Nhap so n : ";
	cin>>n; 
} 

void tongvacacsonguyento(int n){
	int check = 0; 
	for(int i = 2 ; i<=n ;i++){
		for(int j = 2; j<=i/2;j++){
			if(i % j ==0){
				check = 1; 
			}	
		} 
		if(check = 0){
			tong+=i;
			count++; 
		} 
	} 
	
	cout<<endl<<"tong : "<< tong;
	cout<<endl<<"so : "<<count;
} 

int main(){
	input(); 
	tongvacacsonguyento(n);	
	return 0; 
} 
