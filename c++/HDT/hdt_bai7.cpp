#include<iostream>

using namespace std;

class Rectangle{
	private:
	double length;
	double width;
	
	public: 
	Rectangle(){
		
	} 
	Rectangle(double length,double width){
		this -> length = length;
		this -> width = width; 
	} 
	void setLength(double length){
		this -> length = length; 
	} 
	double getLength(){
		return length;  
	} 
	void setWidth(double width){
		this -> width = width; 
	}
	double getWidth(){
		return width; 
	} 
	double getArea(){
		return length * width; 
	} 
	double getPerimeter(){
		return (length + width) * 2; 
	}
}; 

int main(){
	Rectangle r1(4,5);
	cout<<"Area: "<<r1.getArea()<<endl;
	cout<<"Perimeter: "<<r1.getPerimeter()<<endl;
	
	Rectangle r2;
	r2.setLength(2);
	r2.setWidth(3);
	cout<<"Area: "<<r2.getArea()<<endl;
	cout<<"Perimeter: "<<r2.getPerimeter()<<endl;
	
	return 0; 
} 
