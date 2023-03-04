#include<iostream>
#include<math.h>
 
using namespace std;

int main(){
	float a,b,c,denta,x1,x2;
	
	cout<<"Nhap he so a(a!=0) : ";
	cin>>a; 
	cout<<endl<<"Nhap he so b : ";
	cin>>b; 
	cout<<endl<<"Nhap he so c : ";
	cin>>c;
	
	denta=(b*b)-(4*a*c);
	
	if(denta < 0){
		cout<<endl<<"Phuong trinh vo nghiem"; 
	} 
	else if(denta == 0){
		cout<<endl<<"Phuong trinh co nghiem kep duy nhat : "<<-b/(2*a);
	} 
	else{
		x1 = (-b-sqrt(denta))/(2*a);
		x2 = (-b+sqrt(denta))/(2*a); 
		cout<<endl<<"Phuong trinh co 2 nghiem phan biet : "<<endl;
		cout<<endl<<"x1 = "<<x1; 
		cout<<endl<<"x2 = "<<x2; 
	} 
	
	return 0; 
} 
