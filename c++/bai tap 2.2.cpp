#include<iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Nhap hai so a va b : ";
	cin>>a>>b;
	if(a % b == 0){
		cout<<endl<<"So a chia het cho b";
	} 
	else{
		cout<<endl<<"So a khong chia het cho b";
	} 
	
	return 0; 
} 
