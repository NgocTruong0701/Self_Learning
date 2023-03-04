#include<iostream>

using namespace std;

int main(){
	float s,t;
	cout<<"Nhap quang duong S ma nguoi di bo di : ";
	cin>>s;
	if(s <= 3000){
		t = s; 
	} 
	else if (s <= 5000){
		t = 3000 + (s-3000)*2; 
	} 
	else if (s <= 6000){
		t = 3000 + 2000*2 + (s-5000)*3; 
	} 
	else{
		t = 3000 + 2000*2 + 1000*3 + (s-6000)*5; 
	} 
	cout<<endl<<"Thoi gian ma nguoi di bo di het quang duong S la : "<<t;
	
	return 0; 
} 
