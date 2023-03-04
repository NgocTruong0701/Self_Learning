#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	for(int i = 2;i<=10;i++){
		cout<<"Bang cuu chuong "<<i<<": "<<endl;
		for(int j = 1; j <= 10;j++){
			cout<<i<<"*"<<j <<"="<<setw(2)<<i*j<<"  "; 
		} 
		cout<<endl; 
	} 
	
	return 0; 
} 
