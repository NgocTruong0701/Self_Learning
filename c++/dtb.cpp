#include<iostream>

using namespace std;

int main(){
	float dtb;
	cout<<"Nhap diem trung binh : ";
	cin>>dtb;
	if(dtb >= 0 && dtb <=10){
		if(dtb >= 5){
			cout<<endl<<"Sinh vien duoc len lop"; 
		} 
		else{
			cout<<endl<<"Sinh vien khong duoc len lop"; 
		} 
	} 
	else{
		cout<<endl<<"Nhap diem khong hop le"; 
	} 
	
	return 0; 
} 
