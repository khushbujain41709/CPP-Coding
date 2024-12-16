// Time Complexity at insert at start is O(1).
// Time Complexity at insert at end is O(1) due to tail ponter no traversing is required.
// Time Complexity of insertion at kth position is O(k) and in worst case it is O(n).
// Time Complexity of deletion at head = O(1)
// Time Complexity of deletion at End = O(1)
// Time Complexity of deletion at kth position is O(k) and in worst case it is O(n).
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public: 
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

void insertAtStart(int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node ->next = head;
    head->prev = new_node;
    head = new_node;
    return;
}

void insertAtEnd(int val){
    Node* new_node = new Node(val);
    // we are using traversing method but we can also use tail pointer.
    // Node * temp = head;
    // while(temp->next != NULL){
    //     temp = temp->next;
    // }
    // temp->next = new_node;
    // new_node->prev=temp;
    // new_node->next=NULL;
     if (tail == NULL){
        tail = new_node;
        head = new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    return;
}

void insertAtPosition(int val ,int pos){
    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 1;  // 1 based indexing
    while(curr_pos <( pos-1)){
        temp = temp-> next;
        curr_pos ++;
    }
    new_node->next = temp->next;  // jo temp k next tha (k+1 node) usko new_node k next m daal do. 
    temp->next = new_node;
    new_node ->prev = temp;
    new_node->next->prev = new_node; // as we have already set temp->next = new_node
    return;
}

void deleteAtHead(){
    Node* temp = head;
    if (head == NULL){
        return;
    }
    head = head->next;  // in case of single node if we have set head = head ->next this means head is set to NULL now head ->prev is not defined.
    // we can also check---
    if(head ==NULL){  // head points to null as only single node was present in the linked list.
        tail = NULL;
    }
    else{
        head->prev = NULL;
    }
    free(temp);
    return ;
    }

void deleteAtEnd(){
    Node* temp =  tail;
    if (head == NULL){
        return;
    }
    tail = tail -> prev;
    if(tail == NULL){  // tail points to null as only single node was present in the linked list.
        head == NULL;
    }
    else{
        tail->next = NULL;
    }
    free(temp);
    return;
}

void deleteAtPosition(int k){
    //assuming k is less than or equal to length of dll
    Node* temp = head;
    int count = 1;
    while(count< k){
        temp = temp-> next;
        count++;
    }
    // now temp points to kth node 
    temp->prev ->next = temp->next;
    temp->next->prev=temp->prev;
    free(temp);
} 

void display(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val <<"<->";
        temp = temp->next;
    }
    cout<<endl;
}
};

int main(){
    Node* new_node = new Node(4);

    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->val;
    cout<<endl;
    dll.display();

    dll.deleteAtHead(); // since only one is present. This function will make linked list empty.
    dll.display();

    dll.insertAtStart(11);
    dll.display();
    
    dll.insertAtStart(7);
    dll.insertAtStart(11);
    dll.display();

    dll.insertAtEnd(20);
    dll.insertAtEnd(16);
    dll.display();

    cout<<"FOR 1 BASED INDEXING.................................................."<<endl;
    dll.insertAtPosition(23 , 2);
    dll.insertAtPosition(18,3);
    dll.display();

    dll.deleteAtHead();
    dll.display();

    dll.deleteAtEnd();
    dll.display();

    dll.deleteAtPosition(4);
    dll.display();
    return 0;
}