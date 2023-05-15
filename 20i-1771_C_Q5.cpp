//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-5
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//declairation and initialization
	int num=0,odd=0,even=0,max_int=0,min_int=0,i=1,sum=0;
	float average;
	
	do{
	
	cout<<"Enter positive integers ( and press -1 to exit) : ";
	cin>>num;
	
	
	if(num%2==0){
	even++;
	}
	else if(((num%2)!=0)&&(num!=-1)){
	odd++;
	}
	
	if(min_int>=num){
	min_int=num;
	}
	if(max_int<=num){
	max_int=num;
	}
	
	sum = sum + num;
	i++;
	}while((num>=-1)&&(num!=-1));
	
	sum=sum-1;
	i=i-2;
	cout<<endl;
	cout<<"Positive integers entered are : "<<i<<endl;
	cout<<"Number of even integers are   : "<<even<<endl;
	cout<<"Number of odd  integers are   : "<<odd<<endl;
	cout<<"Maximum number entered is     : "<<max_int<<endl;
	cout<<"Minimum number entered is     : "<<min_int<<endl;
	average = sum/i;
	cout<<"Average of all integers is    : "<<average<<endl;
	cout<<endl;
	return 0;
	}
