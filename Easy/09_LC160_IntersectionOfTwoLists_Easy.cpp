#include <bits/stdc++.h>
using namespace std;

// LeetCode 160 - Intersection of Two Linked Lists
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while (a != b) {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }

        // Returns the shared node, or nullptr if the lists do not intersect.
        return a;
    }
};
