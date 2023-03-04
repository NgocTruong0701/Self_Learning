
#include<iostream>
#include<math.h>
#include<iomanip>  

using namespace std;

int main(){
	int n;
	int tong = 0,dem = 0; 
	cout<<endl<<"Bai Toan 3 : " ;
	do{
		cout<<endl<<"Nhap so nguyen duong n : ";
		cin>>n;
		if(n < 0){
			cout<<endl<<"Nhap sai.Nhap lai"; 
		} 
	}
	while(n<0);
	
	while(n != 0){
		tong += n%10;
		n=n/10;
		dem++;	
	} 
	
	cout<<endl<<"n la so co "<<dem<<" chu so.";
	cout<<endl<<"tong cac chu so cua "<<n<<" la : "<<tong;
	
	return 0; 
} 
