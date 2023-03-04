#include<iostream>
#include<math.h> 

using namespace std;

class Circle{
	private:
	double radius;
	
	public:
	Circle(double radius){
		this -> radius = radius; 
	} 
	
	double getArea(){
		return M_PI*pow(radius,2); 
	} 
	
	double getCircumference(){
		return 2*M_PI*radius;
	} 
}; 

int main(){
	Circle c(7);
	
	cout<<c.getArea()<<endl;
	cout<<c.getCircumference()<<endl;
	
	return 0; 
} 
