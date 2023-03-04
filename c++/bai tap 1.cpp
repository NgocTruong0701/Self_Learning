#include<iostream>

using namespace std;

int main(){
	int a , b , c , d , tong ,tich ;
	float tbc;
	
	cout << "Nhap 4 so : " << endl;
	cin >> a >> b >> c >> d ; 
	tong = a +b + c + d; 
	tich = a*b*c*d; 
	cout << "Tong cua 4 so la :" << tong<<endl; 
	cout << "Tich cua 4 so la :" << tich<<endl; 
	cout << "TBC cua 4 so la :" << (float)tong/4<<endl; 
	int min = a;
	if(min > b){
		min = b; 
	} 
	else if(min > c){
		min = c; 
	} 
	else if(min > d){
		min = d; 
	} 
	else { 
		min = a; 
	} 
	cout << "Gia tri nho nhat trong 4 gia tri la : "<<min<<endl;
	
	return 0; 
} 
