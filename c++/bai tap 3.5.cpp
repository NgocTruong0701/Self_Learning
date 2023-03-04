#include<iostream>
#include<math.h> 

using namespace std;

int main(){
	int n ;
	int count = 0; 
	 
	do{
		cout<<"Nhap so nguyen duong n : ";
		cin>>n;
		if(n < 0){
			cout<<endl<<"Nhap khong dung yeu cau.Nhap lai "; 
		} 
	} 
	while(n < 0);
	
	if(n < 2){
		cout<<endl<<n<<" khong phai la so nguyen to"; 
		return 0; 
	} 
	else{
		for(int i = 2 ; i <= n/2 ;i++){
			if(n % i == 0){
				count++; 
			} 
		} 
	} 
	if(count == 0){
		cout<<endl<<n<<" la so nguyen to" ;
	} 
	else{
		cout<<endl<<n<<" khong phai la so nguyen to" ;
	} 
	
	return 0; 
} 
