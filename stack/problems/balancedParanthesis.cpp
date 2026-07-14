#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int size;
    int top;
    char *s;

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

bool isBalanced(string &s) {
    Stack st;
    st.size = s.length();
    st.top = -1;
    st.s = new char[st.size];

    for (int i=0; i < s.length() ;i++) {
        if (s[i] == '(') {
            st.push('(');
        }
        else if (s[i] == ')') {
            if (st.isEmpty()) {
                return false;
            }
            st.pop();
        }
    }

    return st.isEmpty() ? true : false;
}

int main() {
    string s = "(a+b)*(c-d)";
    cout << isBalanced(s);
}