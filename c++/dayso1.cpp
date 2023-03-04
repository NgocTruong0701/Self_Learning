#include<iostream>
#include<math.h> 

using namespace std;
int n;
float x; 
void nhapxvan(){
	cout<<"Nhap so nguyen n : ";
	cin>>n;
	
	cout<<endl<<"Nhap so thuc x : ";
	cin>>x; 
} 

int suly(int n, float x){
	float s = 2016*x; 
	if(n %2 == 0){
		for(int i = 2 ;i <=n;i++) {
		 	s += (pow(x,i))/(pow(3,(i-1)));	
		}
	}
	else{
		s = 0; 
	} 
	
	return s; 
} 

int main(){
	nhapxvan();
	cout<<endl<<"Gia tri cua S = "<<suly(n,x);
	
	return 0; 
} 
