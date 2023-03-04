#include<iostream>

using namespace std;

class Employee{
	private:
	int id;
	string firstName;
	string lastName;
	int salary;
	
	public:
	Employee(){
		
	} 
	Employee(int id,string firstName,string lastName,int salary){
		this -> id = id;
		this -> firstName = firstName;
		this -> lastName = lastName;
		this -> salary = salary; 
	} 
	void setId(int id){
		this -> id = id; 
	} 
	int getId(){
		return id; 
	} 
	void setFirstName(string firstName){
		this -> firstName = firstName; 
	} 
	string getFirstName(){
		return firstName; 
	} 
	void setLastName(string lastName){
		this -> lastName = lastName; 
	} 
	string getLastName(){
		return lastName = lastName; 
	} 
	void setSalary(int salary){
		this -> salary = salary; 
	} 
	int getSalary(){
		return salary; 
	} 
	string getFullName(){
		return firstName + " " + lastName; 
	} 
}; 

int main(){
	Employee nv1(2002,"Le","Ngoc Truong", 100000000);
	cout<<"Id: "<<nv1.getId()<<endl;
	cout<<"Full Name: "<<nv1.getFullName()<<endl;
	cout<<"Salary: "<<nv1.getSalary()<<endl;
	
	return 0; 
	 
} 
