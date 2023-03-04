#include<iostream>

using namespace std;

int n;

void nhapn(){
	do{
		cout<<"Nhap so kwh dien tieu thu : ";
		cin>>n; 
		if(n < 0){
			cout<<endl<<"Nhap sai"; 
		} 
	} 
	while(n<0); 
} 

long sulytiendien(int n){
	long tongtien = 0;
	if(n <=100){
		tongtien = n*750; 
	} 
	else if(n >100 && n<=200){
		tongtien = 100*750 + (n-100)*1250; 
	} 
	else if(n > 200 && n<=300){
		tongtien = 100*750 + 100*1250 + (n-200)*1750; 
	} 
	else if(n>300){
		tongtien = 100*750 + 100*1250 + 100*1750 + (n-300)*3000; 
	} 
	
	return tongtien; 
} 

int main(){
	nhapn();
	cout<<endl<<"Tong so tien nha do phai tra khi dung "<<n<<" kwh dien la : "<<sulytiendien(n)<<" dong";
	
	return 0; 
} 
