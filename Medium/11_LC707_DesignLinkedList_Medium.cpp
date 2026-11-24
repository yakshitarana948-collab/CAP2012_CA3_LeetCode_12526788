#include <bits/stdc++.h>
using namespace std;

// LeetCode 707 - Design Linked List
class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;

        explicit Node(int value) : val(value), next(nullptr) {}
    };

    Node* head;
    int length;

public:
    MyLinkedList() : head(nullptr), length(0) {}

    ~MyLinkedList() {
        while (head != nullptr) {
            Node* nextNode = head->next;
            delete head;
            head = nextNode;
        }
    }

    int get(int index) {
        if (index < 0 || index >= length) {
            return -1;
        }

        Node* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        ++length;
    }

    void addAtTail(int val) {
        addAtIndex(length, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            index = 0;
        }
        if (index > length) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }

        Node* newNode = new Node(val);
        newNode->next = current->next;
        current->next = newNode;
        ++length;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= length) {
            return;
        }

        if (index == 0) {
            Node* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
            --length;
            return;
        }

        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }

        Node* nodeToDelete = current->next;
        current->next = nodeToDelete->next;
        delete nodeToDelete;
        --length;
    }
};
