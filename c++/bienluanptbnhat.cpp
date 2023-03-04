#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	float a,b;
	
	cout<<endl<<"Nhap he so a : ";
	cin>>a; 
	cout<<endl<<"Nhap he so b : ";
	cin>>b;
	
	if(a == 0 && b == 0){
		cout<<endl<<"Phuong trinh co vo so nghiem"; 
	} 
	
	else if(a == 0 && b !=0){
		cout<<endl<<"Phuong trinh vo nghiem"; 
	} 
	
	else if( a != 0){
		cout<<endl<<"Phuong trinh co nghiem duy nhat : x = "<<-b/a; 
	} 
	
	return 0; 
} 
