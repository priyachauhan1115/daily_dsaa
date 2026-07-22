#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> minSt;
public:
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
        else
            minSt.push(minSt.top());
    }

    void pop() {
        if (st.empty()) {
            cerr << "Stack is empty! Cannot pop." << endl;
            return;
        }
        st.pop();
        minSt.pop();
    }

    int top() {
        if (st.empty()) {
            cerr << "Stack is empty! No top element." << endl;
            return -1; // sentinel value since stack holds ints
        }
        return st.top();
    }

    int getMin() {
        if (minSt.empty()) {
            cerr << "Stack is empty! No minimum element." << endl;
            return -1;
        }
        return minSt.top();
    }

    bool isEmpty() {
        return st.empty();
    }
};

int main() {
    MinStack minStack;

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);

    cout << "Minimum value: " << minStack.getMin() << endl;  // -3

    minStack.pop();
    cout << "Top value: " << minStack.top() << endl;          // 0
    cout << "Minimum value after pop: " << minStack.getMin() << endl; // -2

    minStack.pop();
    minStack.pop();

    // Now testing empty stack behavior
    minStack.pop();          // should print error, no crash
    minStack.top();          // should print error, no crash
    minStack.getMin();       // should print error, no crash

    return 0;
}