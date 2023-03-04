#include<iostream>

using namespace std;

class Student{
	private :
	string nameS;
	int ageS;
	
	public : 
	Student(string nameS, int ageS){
		this -> nameS = nameS;
		this -> ageS = ageS;		
	} 
	
	void display(){
		cout << "Name: " << nameS<<endl;
		cout << "Age: " << ageS<<endl; 
	} 
}; 

int main(){
	Student s1("Truong", 20);
	Student s2("Hang" , 19);
	
	s1.display();
	s2.display();
	
	return 0; 
} 
