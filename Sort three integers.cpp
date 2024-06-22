#include <iostream>

using namespace std;

void order(int* n1, int* n2, int* n3){

if(*n1>*n2){
int temp = *n1;
*n1 = *n2;
*n2 = temp;
}
 
if(*n2>*n3){
int temp = *n2;
*n2 = *n3;
*n3 = temp;
}

if(*n1>*n3){
int temp = *n1;
*n1 = *n3;
*n3 = temp;
}
if(*n2>*n3){
int temp = *n2;
*n2 = *n3;
*n3 = temp; }
}

int main(){

int num1, num2, num3;

cout<<"Enter three numbers: ";
cin>>num1>>num2>>num3;

int* n1 = &num1;
int* n2 = &num2;
int* n3 = &num3;

order(n1, n2, n3);

cout<<*n1<<" "<<*n2<<" "<<*n3<<endl;

return 0;

}
