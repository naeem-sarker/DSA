#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue() {
        this->size = 10;
        this->front = this->rear = -1;
        this->Q = new int[this->size];
    }
    Queue(int size) {
        this->size = size;
        this->front = this->rear = -1;
        this->Q = new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x) {
    if (rear == size-1) {
        cout << "Queue is full" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue() {
    int x= -1;
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        x = Q[front];
        front++;
    }

    return x;
}

void Queue::display() {
    for (int i=front+1; i<=rear; i++) {
        cout << Q[i] << " ";
    }
}

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
    q.dequeue();
    cout << endl;
    q.display();
}