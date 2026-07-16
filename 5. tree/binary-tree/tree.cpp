#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue {
public:
    int size;
    int front;
    int rear;
    Node **q;

    Queue(int size) {
        this->size = size;
        this->front = this->rear = 0;
        this->q = new Node*[size];
    }

    void enqueue(Node *x);
    Node * dequeue();
    bool isEmpty();
};

void Queue::enqueue(Node *x) {
    if (rear == size-1) {
        cout << "Queue is full" << endl;
    } else {
        rear++;
        q[rear] = x;
    }
}
Node * Queue::dequeue() {
    Node *x= NULL;
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        front++;
        x = q[front];
    }

    return x;
}
bool Queue::isEmpty() {
    return (front == rear);
}

class Tree {
public:
    Node *root;

    Tree() {
        root = NULL;
    }

    void TreeCreate();
    void PreOrder() {
        PreOrder(root);
    }
    void PreOrder(Node *p);
    void InOrder(Node *p);
    void PostOrder(Node *p);
    void LevelOrder(Node *p);
    int Height(Node *root);
    int Count(Node *root);
};

void Tree::TreeCreate() {
    Node *p, *t;
    int x;
    Queue q(100);
    cout << "Enter root value: ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();
        cout << "Enter right child " << p->data << " ";
        cin >> x;
        if (x != -1) {
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child " << p->data << " ";
        cin >> x;
        if (x != -1) {
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }

}

void Tree::PreOrder(Node *p) {
    if (p) {
        cout << p->data << " ";
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

void Tree::InOrder(Node *p) {
    if (p) {
        InOrder(p->lchild);
        cout << p->data << " ";
        InOrder(p->rchild);
    }
}

void Tree::PostOrder(Node *p) {
    if (p) {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        cout << p->data << " ";
    }
}

void Tree::LevelOrder(Node *p) {

}

int Tree::Height(Node *p) {
    int x=0, y=0;
    if (p==0) {
        return 0;
    }
    x= Height(p->lchild);
    y= Height(p->rchild);
    if (x>y) {
        return x+1;
    }
    else {
        return y+2;
    }
}

int main() {
    Tree tree;
    tree.TreeCreate();
    cout << "Print Pre Order: ";
    tree.PreOrder(tree.root);
    cout << "\nPrint In Order: ";
    tree.InOrder(tree.root);
    cout << "\nPrint Post Order: ";
    tree.PostOrder(tree.root);
    cout << "\nTree Height: ";
    cout << tree.Height(tree.root);
}