#include<iostream>
#include<climits>
using namespace std;
class stacks{
    int capacity;
    int top;
    int* arr;
    public:
    stacks(int data){
        capacity = data;
        arr = new int[data];
        top = -1;
    }
    void push(int value){
        if(top == capacity-1){
            cout<<"OVERFLOW"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = value;
        }
    }
    int pop(){
        if(top== -1){
            cout<<"UNDERFLOW"<<endl;
            return INT_MIN;
        }
        else{ 
            int item = arr[top];
            top--;
            return item;
        }
    }
    bool isFull(){
        return (top==capacity -1);
    }
    bool isEmpty(){
        return (top == -1);
    }
    int getTop(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        else{
            cout<<arr[top]<<endl;        
        }
    }
    int size(){
        return top+1;
    }

};

int main(){
    stacks s(6);
    s.push(8);
    s.push(5);
    s.push(1);
    s.getTop();
    cout<<s.isEmpty()<<endl;
    cout<<s.size();
    return 0;
}  