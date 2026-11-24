#include <bits/stdc++.h>
using namespace std;

// LeetCode 225 - Implement Stack using Queues
class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() = default;

    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int pop() {
        int value = q1.front();
        q1.pop();
        return value;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};
