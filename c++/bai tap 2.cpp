#include<iostream>

using namespace std;

int main(){
	unsigned long n ,s; 
	int tong = 0;
	cout << "Nhap so nguyen duong (5 chu so) : "<<endl;
	cin >> n;
	cout << "Cac chu so cua n : " ;
	while(n != 0){
		s = n%10;
		tong += s; 
		n=n/10;
		cout << s <<" "; 
	} 
	cout << endl << "Tong cac chu so do la : "<<tong;
	
	return 0; 
} 
