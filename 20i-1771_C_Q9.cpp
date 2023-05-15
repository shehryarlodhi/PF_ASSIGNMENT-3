//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-9
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//Declaring and initializing variables
	int i=0,first=0,second=1,sum=0,terms;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter number of terms : ";
	cin>>terms;
	cout<<"Fibonacci series upto "<<terms<<" terms is :  ";
	
	//using while loop to print fibonacci series
	while(i<terms){
		
		if(i==0){
		first = i;
		cout<<first<<" ";
		}
		else if(i==1){
		second = i;
		cout<<second<<" ";
		}
		else if(i>=2&&i<=terms){
		sum = first + second;
		cout<<sum<<" ";
		first = second;
		second = sum;
		}
		i++;
		
		}
		cout<<endl;
		cout<<endl;
	return 0;
	}
	
