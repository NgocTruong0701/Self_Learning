#include<iostream>

using namespace std;

class Person{
	private:
	int id;
	string name;
	int age;
	string address;
	
	public:
	Person(int id, string name, int age, string address){
		this -> id = id;
		this -> name = name;
		this -> age = age;
		this -> address = address; 
	} 
	
	int getId(){
		return id; 
	} 
	string getName(){
		return name; 
	} 
	int getAge(){
		return age; 
	} 
	string getAddress(){
		return address; 
	} 
}; 

int main(){
	Person nguoi1(2002,"Truong",20,"Thanh Hoa");
	
	cout<<"Id: "<<nguoi1.getId()<<endl;
	cout<<"Name: "<<nguoi1.getName()<<endl;
	cout<<"Age: "<<nguoi1.getAge()<<endl;
	cout<<"Address"<<nguoi1.getAddress()<<endl;
	
	return 0; 
} 
