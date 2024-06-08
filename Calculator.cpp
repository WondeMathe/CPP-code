#include <iostream>
using namespace std;

int main()
{
 float num1, num2, result;
 char op;
 cout<<"Enter first number: ";
 cin>>num1;
 cout<<"Enter operator: ";
 cin >>op;
 cout<<"Enter second number: ";
 cin>>num2;
 switch(op){
  case '+': cout<<num1+num2;
  break;
     case '-': cout<<num1-num2;
  break;
  case '*': cout<<num1*num2;
  break;
  case '/': cout<<num1/num2;
  break;
  default: cout<<"Invalid operator";
 }
 return 0; 
}
