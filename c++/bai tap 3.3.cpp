#include<iostream>

using namespace std;

int main(){
	int n ,gt=1;
	 
	do{
		cout<<"Nhap so nguyen duong n : ";
		cin>>n;
		if(n < 0){
			cout<<endl<<"Nhap khong dung yeu cau.Nhap lai "; 
		} 
	} 
	while(n < 0);
	
	for (int i = 1;i<=n;i++){
		gt *=i; 
	}
	
	cout<<endl<<"So "<<n<<" ! vua nha la : "<<gt;
	
	return 0; 
} 
