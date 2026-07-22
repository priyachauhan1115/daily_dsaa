#include <iostream>
#include <stack>
using namespace std;

stack<int> sortStack(stack<int>& input) {
    stack<int> tempStack;

    while (!input.empty()) {
        int temp = input.top();
        input.pop();

        // Move elements from tempStack back to input
        // if they are greater than temp
        while (!tempStack.empty() && tempStack.top() > temp) {
            input.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    return tempStack; // sorted in ascending order (top = smallest)
}

int main() {
    stack<int> st;
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);

    stack<int> sorted = sortStack(st);

    cout << "Sorted stack (top to bottom): ";
    while (!sorted.empty()) {
        cout << sorted.top() << " ";
        sorted.pop();
    }
    cout << endl;

    return 0;
}