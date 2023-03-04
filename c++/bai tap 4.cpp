#include<iostream> 
#include<math.h>

using namespace std;

int main(){
	float x,y;
	cout<<"Nhap gia tri x : "<<endl;
	cin>>x;
	y = (sin(M_PI*(x*x)) + sqrt((x*x) + 1)) / (exp(2*x) + cos((M_PI / 4)*x));
	cout<<"y = "<<y;
	
	return 0; 
} 
