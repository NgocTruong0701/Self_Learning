#include<iostream>
#include<math.h>
#include<iomanip> 

using namespace std;

int main(){
	unsigned long n;
	unsigned long t; 
	cout<<"Nhap doanh so ban hang thang do : ";
	cin>>n;
	if(n>= 20000000){
		t = n*5/100; 
		cout<<endl<<"Tien thuong cua nhan vien thang do la : ";
		cout<<fixed<<t; 
	} 
	else{
		cout<<endl<<"Khong du doanh so yeu cau"; 
	} 
	
	return 0; 
} 
