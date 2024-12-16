// leetcode - 237
// 10 20 30 40 50
// 10 20 40 40(isko delete krdo) 50
#include<iostream>
using namespace std;
class Node{ // User defined data type
    public:
        int value;
        Node* next;
        Node(int data ){
            value = data;
            next = NULL;
        }
};
class LinkedList{ // User defined data structure
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
        void display(){ // since no changes is done to my linked list
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->value<<"->";
                temp = temp -> next;
            }
            cout<<"NULL"<<endl;
        } 
};
Node* deleteMiddle(Node* head) {
    if(head == NULL or head->next==NULL) return NULL;
    Node* temp1 = head;
    int count = 0;
    while(temp1 != NULL){
        count++;
        temp1 = temp1->next;
    }
    if(count == 1) return NULL;
    int curr_pos = 0;
    temp1 = head;
    while(temp1  != NULL){
        if(curr_pos == count/2 - 1){
            temp1 -> next = temp1 -> next -> next;
        }
        curr_pos ++;
        temp1 = temp1->next;
    }
    return head;
}
// better one
Node* deleteMiddle(Node* head) {
    if(head==NULL or head->next==NULL) return NULL;
    Node *slow=head, *fast=head, *prev=NULL;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    slow->next=NULL;
    delete slow;
    return head;        
}
int main(){
    LinkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.display();
    ll.display();
    return 0;
}