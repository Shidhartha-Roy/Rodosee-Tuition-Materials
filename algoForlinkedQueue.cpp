#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedQueue {
    Node* front;
    Node* rear;

public:
    //Constructor
    LinkedQueue(){
        front = rear = nullptr;
    }

    void enqueue(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if(rear == nullptr){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    //Do it on your own
    void dequeue(){
        if(rear == nullptr){
            cout<<"The queue is empty, no element to dequeue";
            return;
        }
        Node* temp = front;
        cout<<"The dequed element is: "<<temp->data<<endl;
        front = temp->next;
    }

    //This also
    void printQueue(){
        if(rear == nullptr){
            cout<<"Queue is empty";
            return;
        }
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main(){
    LinkedQueue q = LinkedQueue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.printQueue();

    q.dequeue();
    q.printQueue();

    return 0;
}