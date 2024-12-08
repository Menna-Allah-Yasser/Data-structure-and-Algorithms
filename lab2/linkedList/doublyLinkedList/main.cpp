#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node * prev;
    Node * next;

    Node(int data=0){
        this->data=data;
        next= nullptr;
        prev= nullptr;
        cout<<"Node con.\n";
    }

    ~Node(){
        cout<<"Node des.\n";
    }
};

class DoublyLinkedList {
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList() {
        head= nullptr;
        tail= nullptr;
        cout<<"Doubly Linked List con.\n";
    }

    int getLength(){
        int length=0;
        Node *current=head;
        while(current!= nullptr){
            length++;
            current=current->next;
        }
        return length;
    }

    void insertFirst(int data){
        Node *ptr= new Node(data);
        if(head== nullptr){
            head=tail=ptr;
        }else {
            ptr->next = head;
            head->prev = ptr;
            head = ptr;

        }
        cout<<"New node with data = "<<data<<" has inserted as head.\n";
        //delete ptr;
    }

    void insertLast(int data){
        Node *ptr= new Node(data);
        if(head== nullptr){
            head=tail=ptr;
        }else{
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
        cout<<"New node with data = "<<data<<" has inserted as tail.\n";
        //delete ptr;
    }

    Node * deleteFirst(){
        Node *ptr=head;
        if(head== nullptr){
            cout<<"Sorry , but list is Empty!\n";
            exit(0);
        }
        else if(head==tail){
            head=tail= nullptr;
        }else {
            head->next->prev = nullptr;
            head = head->next;
        }
        cout<<"First node has deleted.\n";
        return ptr;
    }

    Node * deleteLast(){
        Node *ptr=tail;
        if(head== nullptr){
            cout<<"Sorry , but list is Empty!\n";
            exit(0);
        }
        else if(head==tail){
            head=tail= nullptr;
        }else{
            tail->prev->next= nullptr;
            tail=tail->prev;
        }
        cout<<"Last node has deleted.\n";
        return ptr;
    }

    void printForward(){
        Node *current=head;
        while(current!= nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<"\n";
    }

    ~DoublyLinkedList(){
        Node *current=head;
        while(current!= nullptr){
            Node *next=current->next;
            delete current;
            current=next;
        }
        cout<<"Doubly Linked List des.\n";
    }

};
int main() {

    DoublyLinkedList d1;
   // cout<<d1.deleteFirst()<<"\n";
    cout<<d1.getLength()<<"\n";
    d1.insertLast(4);
    d1.insertLast(5);
    d1.insertLast(6);
    d1.insertLast(7);
    cout<<d1.getLength()<<"\n";
    d1.insertFirst(3);
    d1.insertFirst(2);
    d1.insertFirst(1);
    d1.insertFirst(0);
    cout<<d1.getLength()<<"\n";
    d1.printForward();
    d1.deleteLast();
    d1.deleteFirst();
    d1.printForward();
}
