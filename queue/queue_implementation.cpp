#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int data) {
        Node* temp = new Node(data);

        if (rear == NULL) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    int dequeue() {
        if (front == NULL) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        Node* temp = front;
        int ans = temp->data;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
        return ans;
    }

    int peek() {
        if (front == NULL)
            return -1;

        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << q.peek() << endl;      // 5

    cout << q.dequeue() << endl;   // 5
    cout << q.dequeue() << endl;   // 10

    cout << q.peek() << endl;      // 15

    return 0;
}