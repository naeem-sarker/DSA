#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int count(Node* head) {
    int count = 0;

    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int sum(Node* head) {
    int sum = 0;
    Node* temp = head;

    while (temp!=NULL) {
        sum += temp->data;
        temp = temp->next;
    }

    return sum;
}

int max(Node* head) {
    Node* temp = head;
    int max = temp->data;

    while (temp) {
        if (max < temp->data) {
            max = temp->data;
        }
        temp = temp->next;
    }

    return max;
}

int search(Node* head, int key) {
    Node* temp = head;

    while (temp) {
        if (temp->data == key) {
            return temp->data;
        }

        temp = temp->next;
    }

    return -1;
}

int RSearch(Node* head, int key) {
    Node* temp = head;

        if (temp == NULL) {
            return -1;
        }

        if (temp->data == key) {
            return temp->data;
        }

        return RSearch(temp->next, key);
}

Node* insertAtBeginning(Node* head, int x) {
    Node* newNode = new Node(x);

    newNode->next = head;
    head = newNode;

    return head;
}

Node* insertAtEnd(Node* head, int x) {
    Node* newNode = new Node(x);
    Node* temp = head;

    while (temp) {
        if (temp->next->next == NULL) {
            temp->next = newNode;
        }
        temp = temp->next;
    }

    return temp;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Node* temp = head;

    // while (head != NULL) {
    //     cout << head->data << " " << endl;
    //     head = head->next;
    // }

    // display(head);
    // cout << endl;
    // cout << "Total = " << count(head) << endl;
    // cout << "Sum = " << sum(head) << endl;
    // cout << "Max = " << max(head) << endl;
    // cout << "Search = " << search(head, 20) << endl;

    head = insertAtBeginning(head, 99);
    head = insertAtEnd(head, 101);
    display(head);
}