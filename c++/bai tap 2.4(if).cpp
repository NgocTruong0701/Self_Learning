#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Nhap mot thang bat ki trong nam : ";
	cin>>n;
	
	if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
		cout<<endl<<"Thang "<<n<<" co 31 ngay";
	}
	else if (n == 4 || n == 6 || n == 9 || n == 11 ){
		cout<<endl<<"Thang "<<n<<" co 30 ngay"; 
	} 
	else if (n == 2){
		cout<<endl<<"Thang 2 co 28 ngay hoac 29 ngay(neu nam nhuan)";
	} 
	else{
		cout<<endl<<"Nhap sai, khong dung 1 trong 12 thang cua nam";
	} 
	
	return 0; 
} 
