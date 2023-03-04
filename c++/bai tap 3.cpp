#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n; 
	float r;
	double a , s ,cv; 
	cout << "Nhap so canh cua tam giac : ";
	cin >> n;
	cout << endl << "Nhap ban kinh cua hinh tron : ";
	cin >> r;
	a = 2*r*sin((M_PI) / n);
	cv = n*a;
	s = (n/2)*(r*r)*sin((2*M_PI)/n);
	cout << "Chu vi cua da giac deu "<<n<<" canh la : "<<cv<<endl;
	cout << "Dien tich cua da giac deu "<<n<<" canh la : "<<s<<endl;
	
	return 0; 
} 
