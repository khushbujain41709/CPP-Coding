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
void deleteAlternate(Node* &head){
    // curr->next != NULL when odd number of elements in linked list.
    // curr != NULL when even number of elements in linked list.
    Node* curr = head;
    while(curr != NULL && curr->next != NULL){ // order should be same as it ensures that curr is not NULL before attempting to access curr->next.
        Node* temp = curr->next;  // this is the node to be deleted
        curr->next = curr->next->next; 
        free(temp);
        curr = curr->next;
    }
}
int main(){
    LinkedList ll;
    ll.display();
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.display();
    deleteAlternate(ll.head);  // verify that code is working for both even and odd number of nodes
    ll.display();
    return 0;
}