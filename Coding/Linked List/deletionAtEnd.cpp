// Time Complexity = O(n) , we need to traverse even when tail pointer is passed as we can't move backward.
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
void Updation(Node* &head , int val , int pos){
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos){
        temp = temp -> next;
        curr_pos ++;
    }
    temp->value = val;
}
void deleteAtHead(Node* &head){
    Node* temp = head;  // node of temp pointer . This has to be deleted.
    head = head->next;
    free(temp); // used for pointers . This will free up the space used by the ponter.
}
void deleteAtTail(Node* &head){
    Node* temp = head;
    while(temp->next ->next != NULL){  // second last node should point to null and last node should be deleted.
        temp = temp->next;
    };
    Node* temp1 = temp->next; // node to be deleted
    temp ->next = NULL;
    free(temp1);
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
    insertAtTail(head , 9);
    insertAtPosition(head , 10, 1);
    display(head);
    Updation(head,1,3);
    display(head);
    deleteAtTail(head);
    display(head);
}