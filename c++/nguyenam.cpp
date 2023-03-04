#include<iostream>

using namespace std;

int main(){
	char c;
	cout<<"Nhap mot chu cai bat ki : ";
	cin>>c;
	if(c=='a' || c=='A'){
		cout<<"\n day la nguyen am a";
	} 
	else if(c=='e' || c=='E'){
		cout<<"\n day la nguyen am e";
	} 
	else if(c=='o' || c=='O'){
		cout<<"\n day la nguyen am o";
	} 
	else if(c=='u' || c=='U'){
		cout<<"\n day la nguyen am u"; 
	} 
	else if(c=='i' || c=='I'){
		cout<<"\n day la nguyen am i";
	} 
	else{
		cout<<"\n day khong phai nguyen am";
	} 
} 
