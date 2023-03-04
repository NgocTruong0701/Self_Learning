#include<iostream>
#include<math.h>
#include<iomanip> 

using namespace std;

void BT1(){
	int a,b;
	float x,y,s; 
	cout<<endl<<"Bai Toan 1 : ";
	cout<<endl<<"Nhap so nguyen a : "; 
	cin>>a; 
	cout<<endl<<"Nhap so nguyen b : "; 
	cin>>b;
	cout<<endl<<"Nhap so thuc x : ";
	cin>>x; 
	cout<<endl<<"Nhap so thuc y : ";
	cin>>y;
	
	s = 5*cos(3*x+2) - log((x*x) + 2) + sqrt((a*a) + (b*b)) - (fabs(x-y)/(pow(a,6) + 1 ));
	
	cout<<endl<<"Gia tri bieu thuc S la : ";
	cout<<fixed<<setprecision(3)<<s; 
} 

void BT2(){
	float x,y,z,max,min;
	cout<<endl<<"Bai Toan 2 : " ;
	cout<<endl<<"Nhap so thuc x : ";
	cin>>x; 
	cout<<endl<<"Nhap so thuc y : ";
	cin>>y;
	cout<<endl<<"Nhap so thuc z : ";
	cin>>z;
	
	max = x; 
	min = x; 
	if(max < y){
		max = y; 
	}
	
	else if(max < z){
		max = z; 
	} 
	
	if(min > y){
		min = y; 
	} 
	
	else if(min > z){
		min = z; 
	}
	
	cout<<endl<<"Gia tri lon nhat trong 3 so : "<<max; 
	cout<<endl<<"Gia tri nho nhat trong 3 so : "<<min; 
	
} 

void BT3(){
	int n;
	int tong = 0,sotachra,dem= 0; 
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
		sotachra = n % 10;
		tong += sotachra;
		n=n/10;
		dem++;	
	}
	 
	cout<<endl<<"n la so co "<<dem<<" chu so.";
	cout<<endl<<"tong cac chu so cua n la : "<<tong;
 
} 


void BT4(){
	float diem;
	
	cout<<endl<<"Bai Toan 4 : " ;
	do{
		cout<<endl<<"Nhap diem cua hoc sinh do : ";
		cin>>diem;
		if(diem < 0 || diem > 10){
			cout<<endl<<"Nhap khong hop le." ;
		}
	}
	while(diem < 0 || diem > 10);
	
	if(diem > 8.5){
		cout<<endl<<"Xep loai hoc sinh do la : A"; 
	} 
	else{
		if(diem > 7.00){
			cout<<endl<<"Xep loai hoc sinh do la : B"; 
		}
		else{
			if(diem > 5.5){
				cout
				<<endl<<"Xep loai hoc sinh do la : C"; 
			}
			else{
				if( diem > 4.00){
					cout<<endl<<"Xep loai hoc sinh do la : D"; 
				}
				else{
					cout<<endl<<"Xep loai hoc sinh do la : F"; 
				}
			}
		}
	}
	
	
} 


void BT5(){
	float a,b;
	
	cout<<endl<<"Bai Toan 5 : " ;
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
} 


void BT6() {
	int luachon; 
	cout<<endl<<"Nhap lua chon thich hop : ";
	cout<<endl<<"Chon 1 : De tinh chu vi va dien tich hinh chu nhat "; 
	cout<<endl<<"Chon 2 : De tinh chu vi va dien tich hinh tam giac ";
	cout<<endl<<"Chon 3 : De tinh tich hinh chu tron ";
	cout<<endl<<"Chon 4 : De thoat khoi chuong trinh"<<endl; 
	
	cin>>luachon;
	
	
	
	switch (luachon){
		float a,b,c,s; 
		float d,p;
		float r;  
		case 1 : 
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
		;break;
		case 2 : 
		
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
	
		if(a + b > d && a + d > b && b + d > a  ){
			c = a+b+d; 
			p = c/2; 
			s = sqrt(p*(p-a)*(p-b)*(p-d)) ;
		
			cout<<endl<<"Chu vi hinh tam giac do la : "<<c;
			cout<<endl<<"Dien tich hinh tam giac do la : "<<s; 
		} 
	
		else{
			cout<<endl<<"Day khong phai 3 canh cua 1 tam giac"; 
		} 
		;break; 
		case 3 : 

		do{
			cout<<endl<<"Nhap ban kinh cua hinh tron : ";
			cin>>r;
			if(r < 0 ){
				cout<<endl<<"Nhap sai.Nhap lai"; 
			} 
		
		} 
		while(r < 0 ); 
		s = M_PI*(r*r) ;
	
		cout<<endl<<"Dien tich hinh tron do la : "<<s; 
		;break;
		case 4 : cout<<endl<<"Close.";
				break;
		default : cout<<endl<<"Nhap sai";break; 
	}   
} 

 
void chonmenu(){
	int menu;
	
	do{
		cout<<"NHAP CAC SO DE THUC HIEN CHUONG TRINH :  ";
		cout<<endl<<"Bam phim 1 de lua chon giai bai toan 1."; 
		cout<<endl<<"Bam phim 2 de lua chon giai bai toan 2."; 
		cout<<endl<<"Bam phim 3 de lua chon giai bai toan 3."; 
		cout<<endl<<"Bam phim 4 de lua chon giai bai toan 4."; 
		cout<<endl<<"Bam phim 5 de lua chon giai bai toan 5."; 
		cout<<endl<<"Bam phim 6 de lua chon giai bai toan 6."; 
		cout<<endl<<"Bam phim 0 de lua chon dong ung dung."<<endl; 
		cin>>menu;
		if(menu < 0 || menu > 6 ){
			cout<<endl<<"Nhap sai.Nhap lai."; 
		} 
	} 
	while(menu < 0 || menu > 6); 
	
	switch (menu)
	{
		case 1 : BT1();
		break;
		case 2 : BT2();
		break;
		case 3 : BT3();
		break;
		case 4 : BT4();
		break;
		case 5 : BT5();
		break;
		case 6 : BT6();
		break;
		case 0 : 
		cout<<"CLOSE APP";
		break;
	 } 
} 

int main(){
	chonmenu();
	 
	return 0;
} 
