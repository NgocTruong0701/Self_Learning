#include<iostream>

using namespace std;

class ArrayCalculator{
	public:  
	static int maxOfArray(int arr[],int n){
		int max = arr[0];
		
		for(int i = 0 ;i < n;i++){
			if(max < arr[i]){
				max = arr[i]; 
			} 
		} 
		
		return max; 
	} 
	
	static double maxOfArray(double arr[],int n){
		double max = arr[0];
		
		for(int i = 0 ; i < n;i++){
			if(max < arr[i]){
				max = arr[i]; 
			} 
		} 
		
		return max; 
	} 
	
	static int minOfArray(int arr[],int n){
		int min = arr[0];
		
		for(int i = 0 ;i < n;i++){
			if(min > arr[i]){
				min = arr[i]; 
			} 
		} 
		
		return min; 
	} 
	
	static double minOfArray(double arr[],int n){
		double min = arr[0];
		
		for(int i = 0 ;i < n;i++){
			if(min > arr[i]){
				min = arr[i]; 
			} 
		} 
		
		return min; 
	} 
}; 

int main(){
	int arr1[] = {1,2,3,4,5};
	double arr2[] = {2.1, 2.3, 4.3, 5.3};
	
	cout<<ArrayCalculator::minOfArray(arr1,sizeof(arr1) / sizeof(int))<<endl; 
	cout << ArrayCalculator::minOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
	cout << ArrayCalculator::maxOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
	cout << ArrayCalculator::maxOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl; 
	
	return 0; 
} 
