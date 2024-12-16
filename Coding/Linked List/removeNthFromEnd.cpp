// Leetcode 19
// nth node from end = (length - n + 1)th node from start ... 
// 3rd node from end = 7 - 3 + 1 = 5th node from start where length = 7
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
Node* removeNthFromEnd(Node* head, int n) {
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length ++;
        temp = temp-> next;
    } 
    if(length == 1) return NULL;  
    if(n == length){
        head = head->next;
        return head;
    }    
    // mth node from start = nth node from end 
    int m = length - n + 1;
    int index = m - 1;  // index of node to be deleted
    temp = head;
    for(int i = 1;i<index;i++){
        temp = temp ->next;
    }
    temp->next = temp->next->next;
    return head;
}
// better method using slow and fast pointer
// fast pointer ko n+1 steps aage le jao (n+1 as ek step aage aana hai delete krne k liye) . Agar index niklna bs hota toh n steps aage ate.
// phir dono slow and fast pointer ko aage le jao jab tak fast NULL na ho jaye.
Node* removeNthFromEnd(Node* head, int n) {
    Node* slow = head;
    Node* fast = head;
    for(int i = 1;i<=n+1;i++){
        if(fast == NULL) return head->next; // for [1] ... if n == length then delete head
        fast = fast->next;
    }
    while(fast != NULL){
        slow = slow -> next;
        fast = fast-> next;
    }
    slow->next = slow->next->next;
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