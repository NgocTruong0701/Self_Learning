#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a , b, c, r;
	cout<<"Nhap do dai canh huyen : ";
	cin>>a;
	cout<<endl<<"Nhap do dai canh 1 goc vuong : ";
	cin >> b;
	c = sqrt((a*a) + (b*b));
	r = c / 2;
	cout <<endl << "Ban kinh duong tron noi tiep tam giac : "<<r;
	
	return 0; 
} 
