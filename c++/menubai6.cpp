#include<iostream>
#include<math.h> 

using namespace std;



void cvaschunhat(){
	float a,b,c,s; 
	do{
		cout<<endl<<"Nhap chieu dai hinh chu nhat : ";
		cin>>a;
		cout<<endl<<"Nhap chieu rong hinh chu nhat : ";
		cin>>b;
		if(a <0 || b<0 ){
			cout<<endl<<"Nhap sai.Nhap lai"; 
		} 
		
	} 
	while(a < 0 || b < 0); 
	
	c = (a+b)*2; 
	s = a*b; 
	
	cout<<endl<<"Chu vi hinh chu nhat do la : "<<c;
	cout<<endl<<"Dien tich hinh chu nhat do la : "<<s; 
} 

void cvastamgiac(){
	float a,b,d,c,s,p; 
	do{
		cout<<endl<<"Nhap canh 1 cua hinh tam giac : ";
		cin>>a;
		cout<<endl<<"Nhap canh 2 cua hinh tam giac : ";
		cin>>b;
		cout<<endl<<"Nhap canh 3 cua hinh tam giac : ";
		cin>>d;
		
		if(a <0 || b<0 || d < 0 ){
			cout<<endl<<"Nhap sai.Nhap lai"; 
		} 
		
	} 
	while(a < 0 || b < 0 || d < 0 ); 
	
	c = a+b+d; 
	p = c/2; 
	s = sqrt(p*(p-a)*(p-b)*(p-d)) ;
	
	cout<<endl<<"Chu vi hinh tam giac do la : "<<c;
	cout<<endl<<"Dien tich hinh tam giac do la : "<<s; 
} 

void stron(){
	float s,r; 
	do{
		cout<<endl<<"Nhap ban kinh cua hinh tron : ";
		cin>>r;
		if(r < 0 ){
			cout<<endl<<"Nhap sai.Nhap lai"; 
		} 
		
	} 
	while(r < 0 ); 
	s = M_PI*(r*r) ;
	
	cout<<endl<<"Dien tich hinh chu nhat do la : "<<s; 
} 


int main(){
	int luachon; 
	cout<<endl<<"Nhap lua chon thich hop : ";
	cout<<endl<<"Chon 1 : De tinh chu vi va dien tich hinh chu nhat "; 
	cout<<endl<<"Chon 2 : De tinh chu vi va dien tich hinh tam giac ";
	cout<<endl<<"Chon 3 : De tinh tich hinh chu tron ";
	cout<<endl<<"Chon 4 : De thoat khoi chuong trinh"<<endl; 
	
	cin>>luachon;
	
	switch (luachon){
		case 1 : cvaschunhat();break;
		case 2 : cvastamgiac();break; 
		case 3 : stron();break;
		case 4 : cout<<endl<<"Close.";
				break;
		default : cout<<endl<<"Nhap sai";return 0; 
	}   
	return 0;  
} 





