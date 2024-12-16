#include<iostream>
using namespace std;
// A Sorted linked list is given . Remove Duplicate elements such that repeating elements appears once.
// Time Complexity is O(n) as we are traversing our entire linked list.
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
void deleteDuplicateSorted(Node* &head){
    Node* curr = head;
    while(curr != NULL){
        while(curr->next != NULL && curr->value == curr->next->value){ // we can't access value of curr->next if curr->next is NULL
            // remove the node
            Node* temp = curr->next;
            curr->next = curr->next ->next;
            free(temp);
        }
        curr= curr->next;
    }
}
int main(){
    LinkedList ll;
    ll.display();
    // Sorted list according to question
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(2);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.insertAtEnd(5);
    ll.insertAtEnd(5);
    ll.display();
    deleteDuplicateSorted(ll.head);
    ll.display();
    return 0;
}