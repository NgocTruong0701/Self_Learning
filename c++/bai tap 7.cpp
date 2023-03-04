#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a1 ,n , d , an;
	float s; 
	cout<<"Nhap so phan tu trong day ";
	cin>>n;
	cout<<endl<<"Nhap so hang dau : ";
	cin>>a1;
	cout<<endl<<"Nhap cong sai d : ";
	cin>>d;
	an = a1 +(n-1)*d ;
	s = (float)((a1 + an)*n)/2; 
	cout<<endl<<"Tong cap so cong co "<<n<<" phan tu la : "<<s<<endl; 
	return 0; 
	 
}
