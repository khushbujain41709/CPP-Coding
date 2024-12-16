// Fix size  - Arrays have fixed size.But vector can grow but this is also one problem as it grows in double the size when it is full.
// Contiguous memeory allocation - Arrays and vectors have contiguous memeory allocation and this is leads to bytes eastage that is memory wastage.

// Linked list has unlimited size 
// No continuous memory allocation in linked list
#include<iostream>
using namespace std;
class node{
    public :
    int val;
    node* next;
    node(int val){
        this->val = val;
        next = NULL;
    }
};
void display(node* head){
    if(head == nullptr){
        cout<<"NULL"<<endl;
        return;
    }
    cout<<head->val<<"->";
    display(head->next);
}
int main(){
    node* x = new node(100);
    node a(65);
    node b(47);
    node c(89);
    node d(23);
    x->next = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout<<(((a.next)->next)->next)->val<<endl;
    cout<<(*((*((*(a.next)).next)).next)).val<<endl;

    // printing linked list(better)
    node* temp = &a;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    // printing linked list recursively
    display(x);
    return 0;
}