// Leetcode - 876
// If length = n then 0 to n-1 will be index
// For odd length n/2 will be middle
// For even length n/2 , n/2 -1 will be middle
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
// Time complexity - O(n)
Node* middleNode(Node* head) {
    Node* temp1 = head;
    int count = 0;
    while(temp1 != NULL){
        count++;
        temp1 = temp1->next;
    }
    if(count == 1) return head;
    int curr_pos = 0;
    temp1 = head;
    while(temp1  != NULL){
        if(curr_pos == count/2){
            head = temp1;
        }
        curr_pos ++;
        temp1 = temp1->next;
    }
    return head;
}
// But interviwer wants to do this in single pass 
// Using slow and fast pointer technique
Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast ->next != NULL){  // first check fast is null or not as nul next is not defined.
        slow = slow->next;
        fast = fast -> next->next;
    }
    return slow;
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