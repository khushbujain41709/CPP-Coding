// Time Complexity = O(position)
// Time Complexity in worst case = O(n)
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
void insertAtHead(Node* &head , int val){  // we want to change the original linked list and we don't want to modify its copy.That's why we ahve used &(reference operator)
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* &head , int val){  // we want to change the original linked list and we don't want to modify its copy.That's why we have used &(reference operator)
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    // temp has reached last node.
    temp ->next = new_node; // By default it is pointing to NULL , by class Node definition.
}
void insertAtPosition(Node* &head , int val , int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_position = 0;
    while(current_position != pos-1){
        temp = temp->next;
        current_position++;
    }
    new_node ->next = temp-> next;
    temp->next = new_node;
}
void display(Node* head){ // since no changes is done to my linked list.
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node(4);
    insertAtHead(head , 6);
    display(head);
    insertAtTail(head , 9);
    display(head);
    insertAtPosition(head , 10, 1);
    display(head);
    insertAtPosition(head , 10, 0);
    display(head);
}