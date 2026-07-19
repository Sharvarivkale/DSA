#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Enqueue
    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is Full" << endl;
            return;
        }

        arr[rear] = data;
        rear++;
    }

    // Dequeue
    void dequeue() {
        if (front == rear) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;

        // Reset when queue becomes empty
        if (front == rear) {
            front = 0;
            rear = 0;
        }
    }

    // Get front element
    int getFront() {
        if (front == rear)
            return -1;
        return arr[front];
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();   // Queue Empty

    return 0;
}