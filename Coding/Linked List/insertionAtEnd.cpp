// Time Complexity = O(n) , we need to traverse.
// Time Complexity(Best Case) = O(1) when tail pointer is passed.We don't need to traverse.
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
void insertAtTail(Node* &head , int val){  // we want to change the original linked list and we don't want to modify its copy.That's why we ahve used & s(reference operator)
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!= NULL){  // indicates operations to be done on last node and temp pointer is set to last node.
        temp = temp -> next;
    }
    // temp has reached last node.
    temp ->next = new_node; // By default it is pointing to NULL , by class Node definition.
}
void display(Node* head){ // since no changes is done to my linked list.
    Node* temp = head;
    while(temp != NULL){   // This indicates that my temp pointer is set to NULL
        cout<<temp->value<<"->";   
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* node1 = new Node(47);
    cout<<node1->value <<endl;
    cout<<node1->next<<endl;
    insertAtTail(node1 , 34);
    display(node1);
    Node* head = node1;
    insertAtTail(head , 2);
    display(head);
    insertAtTail(head , 1);
    display(head);
}