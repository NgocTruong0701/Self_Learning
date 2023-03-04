#include<iostream>

using namespace std;

class ArrayCalculator{
	public: 
	static int sumOfArray(int arr[], int n){
		int sum = 0;
		
		for(int i = 0 ;i < n;i++){
			sum += arr[i]; 
		} 
		
		return sum; 
	} 
	
	static double sumOfArray(double arr[],int n){
		double sum = 0;
		
		for(int i = 0 ;i < n;i++){
			sum += arr[i]; 
		} 
		
		return sum; 
	} 
}; 

int main(){
	int arr1[] = {1,2,3,4,5};
	double arr2[] = {1.2,3.1,2.3,4.2}; 
	
	cout<<ArrayCalculator :: sumOfArray(arr1,sizeof(arr1) / sizeof(int))<<endl;
	cout<<ArrayCalculator :: sumOfArray(arr2,sizeof(arr2) / sizeof(double));
	
	return 0; 
} 
