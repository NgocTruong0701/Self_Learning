#include<iostream>
#include <sstream>
#include <string>

using namespace std;

class Time{
	private:
	int hour;
	int minute;
	int second;
	
	public:
	Time(int hour, int minute, int second){
		this -> hour = hour;
		this -> minute = minute;
		this -> second = second; 
	} 
	void setTime(int hour, int minute, int second ){
		this -> hour = hour;
		this -> minute = minute;
		this -> second = second; 
	} 
	void setHour(int hour){
		this -> hour = hour; 
	} 
	void setMinute(int minute){
		this -> minute = minute; 
	} 
	void setSecond(int second){
		this -> second = second; 
	} 
	int getHour(){
		return hour; 
	} 
	int getMinute(){
		return minute; 
	} 
	int getSecond(){
		return second; 
	} 
	void nextSecond(){
		second += 1;
		if(second == 60){
			second = 0;
			minute += 1;
			if(minute == 60){
				minute = 0;
				hour += 1;
				if(hour == 24){
					hour = 0; 
				} 
			} 
		} 
	} 
	void previousSecond(){
		second -= 1;
		if(second == -1){
			second = 59;
			minute -= 1;
			if(minute == -1){
				minute = 59;
				hour -= 1;
				if(hour == -1){
					hour = 23; 
				} 
			} 
		} 
	}
	 void display() {
		if(second >= 0&& second <10){
			if(minute >= 0 && minute < 10){
				if(hour >= 0 && hour < 10){
					cout << "0" << hour << ":0" << minute << ":0" << second << endl;
				} 
				else{
					cout << hour << ":0" << minute << ":0" << second << endl;
				} 
			} 
			else{
				cout << hour << minute << ":0" << second << endl;            	
			} 
		}  
		else{
			cout << hour <<":" << minute << ":" << second << endl;   
		}     
    }
}; 

int main(){
	Time t(12,4,2);
	t.display();
	t.setTime(23,59,59);
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7,0,0);
	t.display();
	t.previousSecond();
	t.display();
	t.setTime(0,0,0);
	t.previousSecond();
	t.display();
	
	return 0; 
} 
