#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    CircularQueue() {
        this->size = 10;
        this->front = this->rear = 0;
        this->Q = new int[this->size];
    }
    CircularQueue(int size) {
        this->size = size;
        this->front = this->rear = 0;
        this->Q = new int[this->size];
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void CircularQueue::enqueue(int x) {
    if ((rear+1) % size == front) {
        cout << "Queue is full" << endl;
    } else {
        rear = (rear+1) % size;
        Q[rear] = x;
    }
}

int CircularQueue::dequeue() {
    int x= -1;
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        front = (front + 1) % size;
        x = Q[front];
    }

    return x;
}

int main() {
    CircularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
}