#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    Node *front;
    Node *rear;

public:
    Queue() {
        this->front = this->rear = NULL;
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x) {
    Node *t = new Node;
    if (t == NULL) {
        cout << "Queue is full" << endl;
    }
    else {
        t->data = x;
        t->next = NULL;
        if (front == NULL) {
            front = rear = t;
        }
        else {
            rear->next = t;
            rear = t;
        }
    }
}

int Queue::dequeue() {
    int x = -1;
    Node *p;
    if (front == NULL) {
        cout << "Queue is empty" << endl;
    }
    else {
        p = front;
        x = p->data;
        front = front->next;
        free(p);
    }

    return x;
}

void Queue::display() {
    Node *p = front;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
}

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.display();
    cout << q.dequeue() << endl;
}