#include<iostream>

using namespace std;

class rectangle{
	public:
	double length;
	double width;
	
	void getInformation(){
		cout<<"Nhap chieu rong : ";
		cin>>width;
		cout<<endl<<"Nhap chieu dai : ";
		cin>>length; 	
	} 
	
	double getArea(){
		return width * length; 
	} 
	
	double getPerimeter(){
		return (width + length)*2; 
	} 
	
	void display(){
		cout<<endl<<"Chu vi cua hinh chu nhat la : "<<getPerimeter();
		cout<<endl<<"Dien tich cua hinh chu nhat la : "<<getArea(); 
	} 
};  

int main(){
	rectangle hinh1;
	
	hinh1.getInformation();
	hinh1.getArea();
	hinh1.getPerimeter();
	hinh1.display();
	
	return 0; 
} 
