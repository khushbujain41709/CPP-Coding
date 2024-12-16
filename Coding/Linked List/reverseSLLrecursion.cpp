#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int data ){
            value = data;
            next = NULL;
        }
};
class LinkedList{
    public:
        Node* head;
        LinkedList(){
            head = NULL;
        }
        void insertAtEnd(int val){
            Node* new_node = new Node(val);
            if (head == NULL){   //Linked list is empty
                head = new_node;
                return;
            }
            Node* temp = head;
            while(temp ->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
        void display(){ // since no changes is done to my linked list.
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->value<<"->";
                temp = temp -> next;
            }
            cout<<"NULL"<<endl;
        } 
};


int main(){
    LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.display();

    return 0;
} 