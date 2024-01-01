#include <iostream>

using namespace std;

class Queue{
    //Data Members
    int front; //indicating the front of the queue

    int rear;//indicating the rear of the queue
    int q[10];

public:
    Queue(){
        front = rear = 0;
    }

    void enqueue(int value){
        if(rear == 10){
            cout<<"Queue full"<<endl;
            return;
        }
        q[rear] = value;
        rear++;
    }

    void dequeue(){
        if(rear == 0){
            cout<<"Queue Empty"<<endl;
            return;
        }
        cout<<"The dequed element is: "<<q[front]<<endl;
        
        for(int i=0; i<rear-1;i++){
            q[i] = q[i+1];

        }
        rear--;
    }

    void display(){
        for(int i=0;i<rear;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(56);

    queue.display();

    queue.dequeue();

    queue.display();

    queue.dequeue();

    queue.display();

    queue.enqueue(72);

    queue.display();


}