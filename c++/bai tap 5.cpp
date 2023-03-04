#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x1 , x2 , y1 , y2 ,kc;
	cout<<"Nhap toa do x1 : "<<endl;
	cin >> x1; 
	cout<<"Nhap toa do x2 : "<<endl;
	cin >> x2; 
	cout<<"Nhap toa do y1 : "<<endl;
	cin >> y1; 
	cout<<"Nhap toa do y2 : "<<endl;
	cin >> y2;
	kc = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))) ;
	cout<<"Khoang cach cua 2 diem A("<<x1<<","<<x2<<") va B("<<y1<<","<<y2<<") la : "<<kc<<endl;
	
	return 0; 
} 
