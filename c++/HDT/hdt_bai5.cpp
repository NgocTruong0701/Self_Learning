#include<iostream>

using namespace std;

class Student{
	private: 
	string name;
	char gender;
	
	public :
	Student(){
		name = "Unknown";
		gender = 'u'; 
	} 
	
	Student(string name){
		this -> name = name; 
		gender ='u'; 
	} 
	
	Student(char gender){
		this -> gender = gender;
		name = "unknown"; 
	} 
	
	Student(string name, char gender){
		this -> name = name;
		this -> gender = gender; 
	} 
	
	void display(){
		cout<<"Name: "<<name<<endl;
		if(gender == 'm'){
			cout<<"Gender: Male"<<endl;
		} 
		else if(gender == 'f'){
			cout<<"Gender: Female"<<endl; 
		} 
		else{
			cout<<"Gender: Unknown"<<endl; 
		} 
		
	} 
}; 

int main(){
	Student s1;
	s1.display();
	Student s2("Quang");
	s2.display();
	Student s3('f');
	s3.display();
	Student s4("Truong" , 'm');
	s4.display();
	
	return 0; 
} 
