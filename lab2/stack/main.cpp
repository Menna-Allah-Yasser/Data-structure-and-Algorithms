#include <iostream>
using namespace std;
const int CAP=5;
class Stack{
private :
    int top;
int size;
    int *arr;
public:
    Stack(int size=CAP){
        top=0;
        this->size=size;
        arr=new int[size];
        cout<<"Stack def. con.\n";
    }

    Stack(Stack &s){
        this->top=s.top;
        this->size=s.size;
        this->arr=new int[size];
        for(int i=0 ; i<size ; i++){
            this->arr[i]=s.arr[i];
        }
        cout<<"Stack copy con.\n";
    }

    bool isFull(){
        return (top==size);
    }

    bool isEmpty(){
        return (top==0);
    }

    void push(int data){
        if(isFull()){
            cout<<"Stack is full.\n";
            exit(0);
        }
        arr[top]=data;
        top++;
        cout<<data<<" is inserted.\n";
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty.\n";
            exit(0);
        }
        top--;
        cout<<"top of stack is poped.\n";
    }

    int topEmlement(){
        return arr[top-1];
    }

    int getSize(){
        return top;
    }

    ~Stack(){
        delete []arr;
        cout<<"Stack des.\n";
    }
};
int main() {

    Stack s1;
    cout<<s1.isEmpty()<<" "<<s1.isFull()<<" "<<s1.getSize()<<"\n";
    //s1.pop();
    s1.push(5);
    s1.push(4);
    s1.push(3);
    s1.push(2);
    cout<<s1.topEmlement()<<"\n";
    s1.pop();//3 4 5
    Stack s2(s1);
    cout<<s2.isEmpty()<<" "<<s2.isFull()<<" "<<s2.getSize()<<"\n";
    s2.topEmlement();
    cout<<s1.topEmlement()<<"\n";
    s1.push(1);
    s1.push(5);
    //s1.push(6);
    cout<<s1.topEmlement()<<"\n";
    s1.pop();
    s1.pop();
    cout<<s1.topEmlement()<<"\n";
    cout<<s1.isEmpty()<<" "<<s1.isFull()<<" "<<s1.getSize()<<"\n";

}
