#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int n1, n2;
	char oper;
	char newCalc = 'y';
	int result;
/*While loop will check from the user to perform other calculation or not*/
	while(newCalc == 'y' ||newCalc =='Y'){
		
	//We are taking inputs from the user
	cout<<"Enter first integer: ";
	cin>>n1;
	cout<<"Enter second integer: ";
	cin>>n2;
	cout<<"Enter operator(+ - * / %): ";
	cin>>oper;
	
	//checking the operator using if else statements and storing the output in the 'result' variable.
	if (oper ==  '+'){
		result = n1 +n2;
	}else if(oper == '-'){
		result = n1-n2;
	}else if(oper == '*'){
		result = n1*n2;
	}else if(oper == '/'){
		result = n1/n2;
	}else if(oper == '%'){
		result = n1%n2;
	}else{
		cout<<"Please Enter a valid operator";
	}
	
	//Showing the calculated result variable on screen
	cout<<n1<<oper<<n2<<" = "<<result<<"\n";
	
	//checking if the result is Even or Odd
	if(result%2 == 0){
		cout<<result<<"\n Result is Even";
	}else{
		cout<<result<<"\n Result is Odd";
	}
	
	// Asking from the user if he/she wants to perform another calculation or not
	cout<<"\n Do you want to perform another calculation(y /n): ";
	cin>>newCalc;
	}
	
}
