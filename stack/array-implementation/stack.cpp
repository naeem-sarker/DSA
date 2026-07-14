#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int size;
    int top;
    int *s;

    void push(int x) {
        if (this->isFull()) {
            cout << "Stack is full" << endl;
            return;
        }

        this->top = this->top + 1;
        this->s[this->top] = x;
    }

    int pop() {
        if (this->isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        int x = this->s[this->top];
        this->top = this->top - 1;
        return x;
    }

    int peek(int pos) {
        if (pos > 0 && pos <= this->top) {
            return this->s[this->top - pos + 1];
        }

        return -1;
    }

    int stackTop() {
        return this->s[this->top];
    }

    bool isEmpty() {
        if (this->top == -1) {
            return true;
        }

        return false;
    }

    bool isFull() {
        if (this->top == this->size - 1) {
            return true;
        }

        return false;
    }
};

int main() {
    Stack st;
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;
    st.size = n;
    st.s = new int[n];
    st.top = -1;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    cout << "Remove element: " << st.pop() << endl;

    st.push(99);

    cout << "Top element: " << st.stackTop() << endl;
    cout << "isEmpty: " << st.isEmpty() << endl;
    cout << "isFull: " << st.isFull() << endl;
    cout << "Peek: " << st.peek(0) << endl;
}