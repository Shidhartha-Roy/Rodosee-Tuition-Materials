#include <iostream>

using namespace std;

class Stack{

    //Data members
    int arr[10];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(int element){
        if(top == 9){
            cout<<"Stack is full!"<<endl;
            return;
        }
            //++top means that the code first increements the value of top and the puts the value of the element into it
            arr[++top] = element;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
        --top;

        
    }

};

int main(){
    Stack stack;

    stack.push(2);
    stack.push(3);
    stack.push(10);
    stack.push(32);

    //First pop taking out the top element and updating the top value
    stack.pop();

    //Second pop
    stack.pop();

    stack.pop();
    stack.pop();
    
    stack.pop();

}