#include<iostream>
#include<iomanip>
 
using namespace std;

int main(){
	int n;
	double d,t;
	cout<<"Nhap so ngay lam viec cua nhan vien do : ";
	cin>>n;
	cout<<endl<<"Nhap doanh so cua nhan vien do : ";
	cin>>d;
	if(n< 0 || d < 0){
		cout<<"Nhap sai." ;
	} 
	
	else{
		if(n < 10 || d < 10000000){
		t = n*50000;
		}
		else if((n>=10 && n<=20)||(d>=10000000 && d<=30000000)){
			t = n*75000 + d*2/100; 
		}
		else if(n>20 && (d>=10000000||d<=30000000)){
			t = n*100000 + d*2/100; 
		}
		else{
			t = n * 100000 + d*4/100; 
		} 
		cout<<endl<<"So tien duoc linh cua nhan vien trong thang do : ";
		cout<<endl<<fixed<<t; 	
	}  
	return 0; 
} 
