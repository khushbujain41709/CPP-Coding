#include <iostream>
#include <stack>
using namespace std;
void insertAtIndex(stack<int> &st, int element, int index){
    // Base case: if stack is empty or index is 0, push the element
    if (st.empty() || index == 0){
        st.push(element);
        return;
    }
    // Recursive case
    if (index == 1) {
        st.push(element);
    }
    else{
    int topElement = st.top();
    st.pop();
    insertAtIndex(st, element, index - 1);
    st.push(topElement);
    }
}
void display(stack<int> &st) {
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;
}
int main() {
    stack<int> st;
    int element, index; 
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the index where the element should be inserted: ";
    cin >> index;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtIndex(st, element, index);
    cout << "Stack after insertion: "<<endl;
    display(st);
    return 0;
} 