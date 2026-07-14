#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class Stack {
private:
    Node *top;
public:
    Stack() {
        top = NULL;
    }

    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x) {
    Node *t = new Node;
    if(t == NULL) {
        cout << "Stack is Full" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop() {
    int x = -1;

    if(top==NULL) {
        cout << "Stack is Empty" << endl;
    } else {
        Node *t = top;
        x = top->data;
        top = top->next;
        delete(t);
    }

    return x;
}

void Stack::display() {
    Node *p = top;
    while(p != NULL) {
        cout << p->data << " ";
        p=p->next;
    }
}

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();
}