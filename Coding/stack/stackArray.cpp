#include<iostream>
#include<climits>
// IMPLEMENTED WITH TIME COMPLEXITY - O(1)
using namespace std;
class Stacks{
        int capacity;
        int* arr;
        int top;
        public:
            Stacks(int c){
                this -> capacity = c;
                arr = new int[c];
                this -> top = -1;
            }
            void push(int data){
                if(this->top == this->capacity - 1){
                    cout<<"Overflow\n";
                    return;
                }
                this->top++;
                this->arr[this->top] = data;
            }
            int pop(){
                if(this->top == -1){
                    cout<<"Underflow\n";
                    return INT_MIN;
                }
                this->top--;
            }
            int getTop(){
                if(this->top == -1){
                    cout<<"Underflow\n";
                    return INT_MIN;
                }
                return this->arr[this->top];
            }
            bool isEmpty(){
                return this->top == -1;
            }
            int size(){
                return this->top ++;
            }
            bool isFull(){
                return this->top == this->capacity - 1;
            }
    };
int main(){
    // we use call stack in recursion. Stack is a LIFO data structure.
    Stacks st(7);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(12);
    st.push(6);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.pop();
    st.push(5);
    st.push(7);
    cout<<st.getTop()<<endl;
    st.push(8);
    cout<<st.isFull();
    return 0;
} 