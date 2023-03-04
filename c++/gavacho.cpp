#include<iostream>

using namespace std;

int main(){
	for(int g=1;g<=36;g++){
		for(int c=1;c<=(36-g);c++){
			if(g+c==36 && (2*g + 4*c ==100)){
				cout<<"So ga la : "<<g;
				cout<<endl<<"So cho la : "<<c;  
			} 
		} 
	} 	
	
	return 0; 
} 
