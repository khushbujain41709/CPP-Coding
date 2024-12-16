// Leetcode - 190
// steps ->
// 1) Find length of both linked list
// 2) larger length k temp ko aage le aao such that |length of larger - length of smaller|
// 3) fir sath m check kro dono ko ki node same hai ki nath.
#include<iostream>
using namespace std;
class ListNode{ // User defined data type
    public:
        int value;
        ListNode* next;
        ListNode(int data ){
            value = data;
            next = NULL;
        }
};
class LinkedList{ // User defined data structure
    public:
        ListNode* head;
        LinkedList(){
            head = NULL;
        }
        void insertAtEnd(int val){
            ListNode* new_node = new ListNode(val);
            if (head == NULL){   //Linked list is empty
                head = new_node;
                return;
            }
            ListNode* temp = head;
            while(temp ->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
        void display(){ // since no changes is done to my linked list
            ListNode* temp = head;
            while(temp != NULL){
                cout<<temp->value<<"->";
                temp = temp -> next;
            }
            cout<<"NULL"<<endl;
        } 
};
bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast ->next != NULL){  // first check fast is null or not as nul next is not defined.
        slow = slow->next;
        fast = fast -> next->next;
        if(slow == fast) return true;
    }
    return false;
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