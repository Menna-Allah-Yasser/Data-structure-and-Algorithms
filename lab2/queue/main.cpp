#include <iostream>
using namespace std;
const int CAP=5;
class Queue{
private :
    int size;
    int capacity;
    int front;
    int rear;
    int *arr;

public:
    Queue(int capacity=CAP){
        arr=new int[capacity];
        size=0;
        rear=-1;
        front=-1;
        this->capacity=capacity;
        cout<<"Queue def. con.\n";
    }

    Queue(Queue &q){
        this->capacity=q.capacity;
        this->size=q.size;
        this->arr=new int[q.capacity];
        this->front=q.front;
        this->rear=q.rear;
        for(int i=0 ; i<this->size ; i++){
            this->arr[i]=q.arr[q.front+i];
        }
        cout<<"Queue copy con.\n";
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return (size==0);
    }

    bool isFull(){
        return (size==capacity);
    }

    void enqueue(int data){
        if(isFull()){
            cout<<"Queue is full.\n";
            exit(0);
        }else if(isEmpty()) {
            front++;
        }
            rear++;
            arr[rear] = data;
            size++;
            cout<<data<<" has inserted in queue.\n";
    }

    void dequeue (){
        if(isEmpty()){
            cout<<"Queue is empty.\n";
            exit(0);
        }
        front++;
        size--;
        cout<<"queue is poped.\n";
    }

    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty.\n";
            exit(0);
        }
        return arr[front];
    }

    ~Queue(){
        delete []arr;
        cout<<"Queue des.\n";
    }
};

int main() {

    Queue q1;// 3 4 5 6 7
    cout<<q1.isEmpty()<<" "<<q1.isFull()<<" "<<q1.getSize()<<"\n";
    //q1.dequeue();
    q1.enqueue(2);
    cout<<q1.isEmpty()<<" "<<q1.isFull()<<" "<<q1.getSize()<<"\n";
    q1.enqueue(3);
    cout<<q1.peek()<<"\n";
    q1.enqueue(4);
    q1.enqueue(5);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    cout<<q1.peek()<<"\n";
    q1.enqueue(6);
    q1.enqueue(7);


    Queue q2(q1);
    cout<<"q2 : "<<q2.isEmpty()<<" "<<q2.isFull()<<" "<<q2.getSize()<<"\n";
    cout<<q1.peek()<<"\n";
    cout<<q2.peek()<<"\n";/////QUESTION????????????????????????
    cout<<q1.isEmpty()<<" "<<q1.isFull()<<" "<<q1.getSize()<<"\n";
    /*q1.enqueue(8);
    q1.enqueue(9);*/
    q1.dequeue();
    q1.dequeue();
    cout<<q1.peek()<<"\n";
    cout<<q1.isEmpty()<<" "<<q1.isFull()<<" "<<q1.getSize()<<"\n";
    cout<<q1.peek()<<"\n";


}
