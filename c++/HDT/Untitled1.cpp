#include<iostream>
#include<string.h> 

using namespace std;

/*tao class : class <ten class> {
			  public:
			  //khai bao danh sach cac thuoc tinh 
			  <kieu du lieu> <ten thuoc tinh>;
			  ...
			  
			  //khai bao danh sach cac phuong thuc
			  <kieu tra ve> <ten phuong thuc>(<kieu tham so> <ten tham so>,....){ 
			  		....
			   }
			   ....
};
*/
class Student {
public:
	string name ;
	int age ;
	
	void getinformation(){
		cout<<"Nhap ten HS : ";
		cin>>name;
		cout<<endl<<"Nhap tuoi HS : ";
		cin>>age; 
	} 
	
	void display(){
		cout<<endl<<"Ten HS : "<<name;
		cout<<endl<<"Tuoi HS : "<<age; 
	}
}; 

int main(){
	Student hs1;
	hs1.getinformation();
	hs1.display(); 
	return 0; 
} 
