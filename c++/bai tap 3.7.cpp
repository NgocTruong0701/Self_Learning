#include<iostream>

using namespace std;

int main(){
	int n,mu = 1 ;
	float s=1; 
	do{
		cout<<"Nhap so nguyen duong n : ";
		cin>>n;
		if(n < 0){
			cout<<endl<<"Nhap khong dung yeu cau.Nhap lai "; 
		} 
	} 
	while(n < 0);
	
	for(int i = 1;i <=n;i++){
		mu *= 3; 
		s +=(float)1/mu; 
	} 
	
	cout<<endl<<"S = "<<s;
	 
	return 0; 
} 
