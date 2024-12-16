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
        ListNode(int data){
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
// Why is this working?
// Suppose slow is travelling at speed 1 kmph and fast is travelling at speed 2 kmph. Slow will be always catched before it's null while fast will do looping.Let n be number of nodes pos and m be number of nodes which are inside loop or after or equal to pos. Now slow travels n+m and fast travels l+m where l = n+m(total nodes).Now l+m = 2(n+m).So m = l-2n.
//   1->9->8->11->7 here 7 is connected to 8. So l = 5 , n = 2 , m = 3.

// If slow = 1kmph and fast is 3 or 4 or 5 kmph then also this works and node where slow = temp will be same in each case. 
ListNode *detectCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    bool flag = false;
    ListNode* temp = head;
    while(fast != NULL && fast ->next != NULL){  // first check fast is null or not as nul next is not defined.
        slow = slow->next;
        fast = fast -> next->next;
        if(slow == fast){
            flag = true;
            break;
        }
    }
    if(flag == true){
        while(slow != temp){
            temp = temp->next;
            slow = slow ->next;
        }
    }
    else{
        return {};
    }
    return temp;
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