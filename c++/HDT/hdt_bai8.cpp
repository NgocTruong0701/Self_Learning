#include<iostream>

using namespace std;

class Student{
	private:
	int id;
	string name;
	int age;
	string address;
	int score;
	
	public: 
	Student(){
		
	} 
	Student(int id, string name, int age, string address, int score){
		this -> id = id; 
		this -> name = name;
		this -> age = age;  
		this -> address = address;
		this -> score = score;  
	} 
	void setId(int id) {
		this -> id = id; 
	}
	int getId(){
		return id; 
	} 
	void setName(string name) {
		this -> name = name; 
	}
	string getName(){
		return name; 
	} 
	void setAge(int age){
		this -> age = age; 
	} 
	int getAge(){
		return age; 
	} 
	void setAddress(string address){
		this -> address = address; 
	} 
	string getAddress(){
		return address; 
	} 
	void setScore(int score){
		if(score < 0){
			this -> score = 0; 
		} 
		else if(score > 10){
			this -> score = 10;  
		} 
		else{
			this -> score = score; 
		} 
	} 
	int getScore(){
		return score; 
	} 
}; 

int main(){
	Student s1(2002,"Truong",20,"Thanh Hoa",9);
	cout<<s1.getId()<<endl;
	cout<<s1.getName()<<endl;
	cout<<s1.getAge()<<endl;
	cout<<s1.getAddress()<<endl;
	cout<<s1.getScore()<<endl;
	s1.setScore(-2);
	cout<<s1.getScore()<<endl;
	s1.setScore(14);
	cout<<s1.getScore()<<endl;
	
	return 0; 
} 
