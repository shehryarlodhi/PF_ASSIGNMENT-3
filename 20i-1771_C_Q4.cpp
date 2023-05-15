//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-4
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//declairation and initiolization of variables
	int number,remainder,updated_result,result=1;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter an integer of any length : ";
	cin>>number;

	//using while loop
	while(number!=0){
		
		//assigning value of mod of number to variable "remainder
		remainder = number % 10;
		
		//multiplying result variable with remainder and storing in updated result variable
		updated_result = result * remainder;
		
		//assigning updated result value to result for processing in next iteration
		result = updated_result;
		
		//dividing the number by 10 to remove last digit
		number = number/10;
		
		}
	
	//displaying output
	cout<<"The product of digits of given number is : "<<result<<endl;
	cout<<endl;
	
	return 0;
	}	
