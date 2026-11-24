#include <bits/stdc++.h>
using namespace std;

// LeetCode 203 - Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* current = &dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* nodeToDelete = current->next;
                current->next = nodeToDelete->next;
                delete nodeToDelete;
            } else {
                current = current->next;
            }
        }

        return dummy.next;
    }
};
