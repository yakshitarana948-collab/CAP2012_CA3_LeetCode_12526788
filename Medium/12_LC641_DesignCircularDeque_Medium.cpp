#include <bits/stdc++.h>
using namespace std;

// LeetCode 641 - Design Circular Deque
class MyCircularDeque {
private:
    vector<int> data;
    int frontIndex;
    int rearIndex;
    int count;
    int capacity;

public:
    MyCircularDeque(int k)
        : data(k), frontIndex(0), rearIndex(0), count(0), capacity(k) {}

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            frontIndex = rearIndex = 0;
        } else {
            frontIndex = (frontIndex - 1 + capacity) % capacity;
        }

        data[frontIndex] = value;
        ++count;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        if (isEmpty()) {
            frontIndex = rearIndex = 0;
        } else {
            rearIndex = (rearIndex + 1) % capacity;
        }

        data[rearIndex] = value;
        ++count;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        if (count == 1) {
            count = 0;
            return true;
        }

        frontIndex = (frontIndex + 1) % capacity;
        --count;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        if (count == 1) {
            count = 0;
            return true;
        }

        rearIndex = (rearIndex - 1 + capacity) % capacity;
        --count;
        return true;
    }

    int getFront() {
        return isEmpty() ? -1 : data[frontIndex];
    }

    int getRear() {
        return isEmpty() ? -1 : data[rearIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};
