// Time Complexity = O(1) as we don't traverse or move nodes where n is number of nodes.
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
void insertAtHead(Node* &head , int val){  // we want to change the original linked list and we don't want to modify its copy.That's why we have used & s(reference operator)
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
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
    Node* head = NULL;
    Node* node1 = new Node(47);
    cout<<node1->value <<endl;
    cout<<node1->next<<endl;
    insertAtHead(node1 , 34);
    display(node1);
    insertAtHead(head , 2);
    display(head);
    insertAtHead(head , 1);
    display(head);
}