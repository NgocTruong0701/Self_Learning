#include<iostream>

using namespace std;

int main(){
	int n;
	int dem=0,tong=0; 
	cout<<"Nhap cac so nguyen : "; 
	do{
		cin>>n;
		dem++;
		tong+=n;	
	} 
	while(n!=-1);
	cout<<endl<<"Tong cac so : "<<tong+1;
	cout<<endl<<"Da nhap "<<dem-1<<" so";
	
	return 0 ; 
} 
