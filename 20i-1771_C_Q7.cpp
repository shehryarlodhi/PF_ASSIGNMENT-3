//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-7
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//Declaring variables
	int number,first,last,temp,sum;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter any number : ";
	cin>>number;
	
	first = number;
	temp = first;
	
	//using while loop to fint first digit
	while(temp>=10){
	temp = temp/10;
	}
	
	//re-assigning value of temp variable to first
	first = temp;
	//calculating last digit of number
	last = number%10;
	//calculating sum of both
	sum = first + last;
	
	//displaying output
	cout<<"Sum of first and last digit of the number '"<<number<<"' is : "<<sum<<endl;
	cout<<endl;
	
	return 0;
	}
	
	
