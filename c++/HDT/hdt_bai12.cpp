#include<iostream>
#include<math.h>
 
using namespace std;

class Point{
	private:
	double x;
	double y;
	
	public:
	Point(){
		
	}
	Point(double x, double y){
		this -> x = x;
		this -> y = y; 
	}	
	void setX(double x){
		this -> x = x; 
	} 
	void setY(double y){
		this -> y = y; 
	} 
	double getX(){
		return x; 
	} 
	double getY(){
		return y; 
	} 
	void setXY(double x, double y){
		this -> x = x;
		this -> y = y; 
	} 
	double distance(double x, double y){
		return sqrt((x - this->x)*(x - this -> x) + (y - this -> y)*(y - this -> y)); 
	} 
	double distance(Point another){
		return distance(another.getX(),another.getY()); 
	} 
}; 


int main(){
	Point A(1.5,6.7);
	Point B(2.8,3.2);
	
	cout << A.distance(2.34,7.8)<<endl;
	cout << A.distance(B) << endl;

	return 0; 
} 
 
