#include<iostream>

using namespace std;

int main(){
	char c;
	cout<<"Nhap ki tu bat ki : ";
	cin>>c;
	switch(c){
		case 'a' : case 'A' : cout<<"\n day la nguyen am a";break; 
		case 'e' : case 'E' : cout<<"\n day la nguyen am e";break;
		case 'u' : case 'U' : cout<<"\n day la nguyen am u";break;
		case 'i' : case 'I' : cout<<"\n day la nguyen am i";break;
		case 'o' : case 'O' : cout<<"\n day la nguyen am o";break;
		default : cout<<"day la phu am";    
	} 
	
	return 0; 
} 
