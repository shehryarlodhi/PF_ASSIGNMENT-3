//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//Question-10
//Assignment-3
#include<iostream>
using namespace std;
int main(){
	//declaration and initialization of variables
	int num_1,num_2,result,result_1,result_2,i=1;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter number one : ";
	cin>>num_1;
	cout<<"Enter number two : ";
	cin>>num_2;
	
	//using do while loop
	do{
		result_1 = num_1%i;
		result_2 = num_2%i;
		
		if(result_1==0&&result_2==0){
		result = i;
		}
		
		i++;
		
	}while(num_1>=i&&num_2>=i);
	
	//displaying output
	cout<<"The Greatest Common Deviser is : "<<result<<endl;
	cout<<endl;
	
	return 0;
	}
