// Time Complexity at insert at start is O(n).
// Time Complexity at insert at end is O(n).
// Time Complexity of deletion at head = O(n)
// Time Complexity of deletion at End = O(n)
#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int data){
            value = data;
            next = NULL;
        }
};
class CircularLinkedList{
    public:
    Node* head;
    CircularLinkedList(){
        head = NULL;
    }

    void insertAtHead(int val){  // we want to change the original linked list and we don't want to modify its copy.That's why we have used &(reference operator)
    Node* new_node = new Node(val);
    if (head==NULL){
        head = new_node;
        new_node->next = head;  // for circular linked list
        return;
    }
    Node* tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    // now tail is pointing to last node
    tail->next = new_node;
    new_node->next = head;
    head = new_node;
    }

    void insertAtPosition(int val , int pos){
    if(pos==0){
        insertAtHead(val);
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

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if (head==NULL){
            head = new_node;
            new_node->next = head;  // for circular linked list
        return;
        }
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        // now tail is pointing to last node
        tail->next = new_node;
        new_node->next = head;
    }

    void Updation(int val , int pos){
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos){
        temp = temp -> next;
        curr_pos ++;
    }
    temp->value = val;
    }

    void deleteAtHead(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        Node* tail = head;
        while(tail->next != head){
            tail= tail->next;
        }
        tail->next = temp->next;
        head = head->next;
        free(temp);
    }

    void deleteAtEnd(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        Node* tail = head;
        while(tail->next->next != head){  // last second node
            tail= tail->next;
        }
        temp = tail ->next;
        tail -> next = head;
        free(temp);
    }

    void deleteAtPosition(int pos){
    Node* temp = head;
    int curr_pos = 0;
    if (pos == 0){
        deleteAtHead();
        return;
    }
    while(curr_pos != pos-1){
        temp = temp ->next;
        curr_pos++;
    }
    Node* temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
}

    void display(){
        Node* temp = head;
        do{
            cout<<temp->value<<"->";
            temp = temp->next;
        } while(temp!= head);  // using do - while instead of while because at first node temp is pointing to head so it will not enter loop.
        cout<<endl;
    }

    void isCircular(){
        Node* temp = head;
        for(int i = 0;i<= 15;i++){
            cout<<temp->value<<"->";
            temp =temp->next;
        }
        cout<<endl;
    }
};
int main(){
    CircularLinkedList cll;
    cll.insertAtHead(3);
    cll.insertAtHead(4);
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(1);
    cll.display();

    cll.isCircular();

    cll.insertAtEnd(7);
    cll.display();

    cll.insertAtPosition(8,2);
    cll.display();

    cll.Updation(6,3);
    cll.display();

    cll.deleteAtHead();
    cll.display();

    cll.deleteAtEnd();
    cll.display();

    cll.isCircular();

    cll.deleteAtPosition(3);
    cll.display();
}