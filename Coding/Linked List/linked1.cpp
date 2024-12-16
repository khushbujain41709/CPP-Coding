// Linked list is a linear dynamic data structure. We can grow or shrink them in runtime with no memory wastage .
// In insertion and deletion we don't shift elements but in array we shift elements.
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
int main(){
    Node* node1 = new Node(47);
    cout<<node1->value <<endl;
    cout<<node1->next<<endl;
}