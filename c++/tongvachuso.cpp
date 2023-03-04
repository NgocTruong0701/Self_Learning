#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "Nhap so nguyen duong n: ";
	cin>> n;
	int dem =0, tong=0;
	while(n>0){
		dem++;
		tong += n%10; 
		n=n/10;
	}
	cout << "tong: " << tong <<endl;
	cout << "dem: " << dem << endl;
	return 0;
}	
