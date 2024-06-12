#include <iostream>

using namespace std;

void pop(){
    int top = -1;
    int stack[10];
    if(top==-1){
        cout<<"Stack is empty!";
    }
    else{
        cout<<stack[top]<<" deleted"<<endl;
        stack[top] = 0;
        top--;
    }
}

int main()
{
    pop();
    return 0;
}
