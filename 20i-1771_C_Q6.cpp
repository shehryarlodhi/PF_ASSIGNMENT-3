//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-6
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//declairation
	int num,i=1,temp_num;
	
	//asking user for input
	cout<<"Enter a number : ";
	cin>>num;
	

	while(i<num){
		if(num==1 || num==0){
		cout<<num<<" is not a prime number."<<endl;
		}
		else if(num%i!=0){
		cout<<num<<" is  a prime number."<<endl;
		}
		else if(num%2!=0){
		cout<<num<<" is a prime number."<<endl;
		}
		else{
		cout<<num<<" is not a prime number."<<endl;
		}
		i++;
	}
	
	return 0;
	}
	
