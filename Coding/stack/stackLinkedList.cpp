#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value = data;
        next = NULL;
    }
};
class stacks{
    int capacity;
    int curr_size;
    Node* head;
    public:
    stacks(int c){
        capacity = c;
        curr_size = 0;
        head = NULL;
    }
    void push(int val){
        if(curr_size == capacity){
            cout<<"OVERFLOW"<<endl;
            return;        
        }
        Node* new_node = new Node(val);
        new_node ->next = head;
        head = new_node;
        curr_size++;
    }
    bool IsEmpty(){
        return head == NULL;
    }
    bool IsFull(){
        return curr_size == capacity;
    }
    int size(){
        return curr_size;
    }
    int pop(){
        if(head == NULL){
            cout<<"UNDERFLOW"<<endl;
            return INT_MIN;
        }
        else{
            Node* new_head = head->next;
            head -> next = NULL;
            int ToBeRemoved = head->value;
            delete head;
            head = new_head;
            curr_size--;
            return ToBeRemoved;
        }
    }
    int GetTop(){
        return head->value;
    }
    void print(Node* temp){
        if(temp == NULL){
            return;
        }
        print(temp->next);
        cout<<temp->value<<" ";
    }
    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    stacks st(7);
    cout<<st.pop()<<endl;
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(12);
    st.push(6);
    st.push(3);
    st.display();
    cout<<st.GetTop()<<endl;
    st.pop();
    st.push(5);
    st.push(7);
    cout<<st.GetTop()<<endl;
    st.push(8);
    cout<<st.IsFull()<<endl;
    cout<<st.size()<<endl;
    return 0;
}