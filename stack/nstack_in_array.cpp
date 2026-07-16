#include <bits/stdc++.h>
using namespace std;

class NStack {
    int *arr;
    int *top;
    int *next;

    int n, s;
    int freeSpace;

public:
    // Constructor
    NStack(int N, int S) {
        n = N;
        s = S;

        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // Initialize all stacks as empty
        for (int i = 0; i < n; i++) {
            top[i] = -1;
        }

        // Initialize free list
        for (int i = 0; i < s - 1; i++) {
            next[i] = i + 1;
        }
        next[s - 1] = -1;

        freeSpace = 0;
    }

    // Push x into mth stack
    bool push(int x, int m) {

        // Overflow
        if (freeSpace == -1)
            return false;

        // Get free index
        int index = freeSpace;

        // Update free space
        freeSpace = next[index];

        // Insert element
        arr[index] = x;

        // Link new node to previous top
        next[index] = top[m - 1];

        // Update top
        top[m - 1] = index;

        return true;
    }

    // Pop from mth stack
    int pop(int m) {

        // Underflow
        if (top[m - 1] == -1)
            return -1;

        // Get top index
        int index = top[m - 1];

        // Move top to next element
        top[m - 1] = next[index];

        // Store answer
        int ans = arr[index];

        // Add this index back to free list
        next[index] = freeSpace;
        freeSpace = index;

        return ans;
    }

    // Destructor
    ~NStack() {
        delete[] arr;
        delete[] top;
        delete[] next;
    }
};