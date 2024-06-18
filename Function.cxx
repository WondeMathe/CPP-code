#include <iostream>
using namespace std;
//Adding two numbers
int add_numbers(int, int);


int main()
{
	int firstNum, secondNum, result;
	cin>>firstNum>>secondNum;
	result= add_numbers(firstNum, secondNum);
	cout<<result;
	
}
//Defining addtion function
int add_numbers(int n1, int n2){
int total=0, n1=4, n2=2;
total=n1+n2;
return total;
}
