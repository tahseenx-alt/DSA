
#include <iostream>
using namespace std;

class Stack {
    int arr[5];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Insert element
    void push(int x) {
        if (top == 4) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = x;
    }

    // Remove top element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        top--;
    }

    // Return top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }

        return arr[top];
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Check full
    bool isFull() {
        return top == 4;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;

    st.pop();

    cout << "After pop: " << st.peek() << endl;

    cout << "Stack elements:\n";
    st.display();

    return 0;
}
