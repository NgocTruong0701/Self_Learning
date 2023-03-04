#include<iostream>

using namespace std;

int main(){
	int n,nam;
	cout<<"Nhap mot thang bat ki trong nam : ";
	cin>>n;
	cout<<"Nhap nam :";
	cin>>nam ;
	switch (n) {
		case 1 : 
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 : 
		case 12 : 
		cout<<endl<<"Thang "<<n<<" co 31 ngay";
		break;
		case 2 : {
			if(nam % 4 == 0 && nam % 100 != 0){
				cout<<endl<<"Thang 2 co 29 ngay(nam nhuan)";break; 
			} 
			else{
				cout<<endl<<"Thang 2 co 28 ngay";
				break; 
			} 
		} 
		case 4 : 
		case 6 : 
		case 9 : 
		case 11 : 
		cout<<endl<<"Thang "<<n<<" co 30 ngay";
		break;
		
		default:cout<<endl<<"Nhap sai, khong dung 1 trong 12 thang cua nam"; 
	} 
	
	return 0; 
} 
