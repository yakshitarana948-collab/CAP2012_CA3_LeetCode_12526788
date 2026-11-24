# CAP2012 – Data Structures | Continuous Assessment 3

**Student:** Yakshita Rana  
**Registration Number:** 12526788  
**Roll Number:** 37  
**LeetCode Profile:** https://leetcode.com/u/yakshitarana/  
**Course Code:** CAP2012  
**Assessment:** CA3 – LeetCode Problem Solving using C/C++ and GitHub Submission

## Overview

This repository contains C++ implementations for the 16 LeetCode problems listed in the CA3 assignment brief. The problems cover basic control flow, arrays, searching, linked lists, stacks, queues and deques.

The solutions are arranged by difficulty, following the folder and file-naming convention given in the assignment.

## Repository structure

```text
CAP2012_CA3_LeetCode_12526788/
├── Easy/
│   ├── 01_LC1342_NumberOfSteps_Easy.cpp
│   ├── 02_LC704_BinarySearch_Easy.cpp
│   ├── 03_LC035_SearchInsertPosition_Easy.cpp
│   ├── 04_LC283_MoveZeroes_Easy.cpp
│   ├── 05_LC141_LinkedListCycle_Easy.cpp
│   ├── 06_LC203_RemoveLinkedListElements_Easy.cpp
│   ├── 07_LC876_MiddleOfLinkedList_Easy.cpp
│   ├── 08_LC225_StackUsingQueues_Easy.cpp
│   └── 09_LC160_IntersectionOfTwoLists_Easy.cpp
├── Medium/
│   ├── 10_LC019_RemoveNthFromEnd_Medium.cpp
│   ├── 11_LC707_DesignLinkedList_Medium.cpp
│   ├── 12_LC641_DesignCircularDeque_Medium.cpp
│   ├── 13_LC946_ValidateStackSequences_Medium.cpp
│   └── 14_LC054_SpiralMatrix_Medium.cpp
├── Hard/
│   ├── 15_LC004_MedianOfTwoSortedArrays_Hard.cpp
│   └── 16_LC042_TrappingRainWater_Hard.cpp
└── README.md
```

## Problem write-ups

Each entry briefly records the idea used and the expected complexity. The source files contain the corresponding C++ implementation. Review every solution, make sure it reflects your own understanding, and verify it with LeetCode before submission.

### Easy

| No. | LeetCode problem | Approach | Time | Extra space |
|---:|---|---|---:|---:|
| 1 | 1342 – Number of Steps to Reduce a Number to Zero | Repeatedly divide even values by two and subtract one from odd values. | O(log n) | O(1) |
| 2 | 704 – Binary Search | Repeatedly check the middle element and discard the half that cannot contain the target. | O(log n) | O(1) |
| 3 | 35 – Search Insert Position | Binary search; when the target is absent, the left boundary is its insertion index. | O(log n) | O(1) |
| 4 | 283 – Move Zeroes | A write pointer places each non-zero value in the next available position. | O(n) | O(1) |
| 5 | 141 – Linked List Cycle | Floyd’s slow and fast pointers meet if a cycle exists. | O(n) | O(1) |
| 6 | 203 – Remove Linked List Elements | A dummy node makes deletion at the head and elsewhere follow the same traversal pattern. | O(n) | O(1) |
| 7 | 876 – Middle of the Linked List | The fast pointer moves twice as quickly as the slow pointer. | O(n) | O(1) |
| 8 | 225 – Implement Stack using Queues | Two queues are rearranged on each push so the newest item stays at the front. | Push O(n); other operations O(1) | O(n) |
| 9 | 160 – Intersection of Two Linked Lists | Two pointers switch to the opposite list at the end, equalising the distance travelled. | O(m+n) | O(1) |

### Medium

| No. | LeetCode problem | Approach | Time | Extra space |
|---:|---|---|---:|---:|
| 10 | 19 – Remove Nth Node From End of List | A dummy node and a gap of n nodes between two pointers identify the node to remove in one pass. | O(n) | O(1) |
| 11 | 707 – Design Linked List | A singly linked list stores nodes; a length counter helps validate indexes. | O(n) per operation (head insertion O(1)) | O(n) total |
| 12 | 641 – Design Circular Deque | A fixed-size vector and circular front/rear indexes support both ends. | O(1) per operation | O(k) |
| 13 | 946 – Validate Stack Sequences | Simulate pushes and pop whenever the stack top matches the next required popped value. | O(n) | O(n) |
| 14 | 54 – Spiral Matrix | Four boundaries move inward after traversing the top, right, bottom and left sides. | O(mn) | O(1) auxiliary, excluding output |

### Hard

| No. | LeetCode problem | Approach | Time | Extra space |
|---:|---|---|---:|---:|
| 15 | 4 – Median of Two Sorted Arrays | Binary search a partition in the shorter array so the left and right halves are correctly ordered. | O(log(min(m,n))) | O(1) |
| 16 | 42 – Trapping Rain Water | Two pointers track the maximum wall seen from each side and add trapped water as they move inward. | O(n) | O(1) |

## Testing notes

The assignment asks for the LeetCode examples as well as additional relevant and boundary tests. The following are useful cases to run for the listed implementations. Record the actual LeetCode result after running them.

| Problem | Example / additional checks |
|---|---|
| 1342 | `14 -> 6`, `8 -> 4`, `123 -> 12`, `0 -> 0` |
| 704 | Target present in middle; target absent; one-element array |
| 35 | Target present; insertion before first, between values, and after last |
| 283 | `[0,1,0,3,12]`; `[0]`; array with no zeroes; all zeroes |
| 141 | A list with a cycle; a list ending in `nullptr`; empty list |
| 203 | Remove a middle value; remove head values; remove every node; empty list |
| 876 | Odd-length list; even-length list; one-node list |
| 225 | Push two values, check top, pop, then check empty; push after popping |
| 160 | Shared tail; intersection at the head; no intersection |
| 19 | Remove the last node; remove the head; two-node list |
| 707 | Add at head/tail/index; get invalid index; delete head/tail; empty list |
| 641 | Insert at both ends; reject insertion when full; delete until empty; insert again after becoming empty |
| 946 | Valid sequence `[4,5,3,2,1]`; invalid sequence `[4,3,5,1,2]` for pushed `[1,2,3,4,5]` |
| 54 | 3x3 matrix; 2x4 matrix; single row; single column |
| 4 | `[1,3]` and `[2]`; `[1,2]` and `[3,4]`; one input array empty |
| 42 | `[0,1,0,2,1,0,1,3,2,1,2,1] -> 6`; `[4,2,0,3,2,5] -> 9`; monotonic heights |

## Build and submission notes

These files use the LeetCode C++ function/class format. LeetCode supplies the required standard headers and linked-list node definition in its editor. The local source files include `<bits/stdc++.h>` for convenience; this header is commonly available with GCC.

1. Create a public GitHub repository named `CAP2012_CA3_LeetCode_12526788`, unless the faculty has specified a different visibility.
2. Upload the `Easy`, `Medium`, and `Hard` folders and this README.
3. Check that all 16 source files are visible and named correctly.
4. Open the repository link in a signed-out/private browser window to check evaluator access.
5. Run the examples and additional checks on LeetCode, and update this README with the results you actually observe.
6. Keep the repository URL available for the faculty submission and viva.

## Viva preparation

For each problem, be ready to explain:
- what the input and expected output represent;
- why the selected data structure or algorithm fits the problem;
- how the important pointers, indexes or boundaries move;
- the time and space complexity;
- at least one normal case and one boundary case.

**Student review note:** This package is a starting point. Yakshita should read and understand every implementation, make any changes needed to reflect her own work, and verify all examples and edge cases herself. Do not claim tests passed until they have actually been run.

**Note:** The complexity values describe the algorithms. Testing should be completed and verified on LeetCode before submission. Review the code and make sure you can explain each implementation in your own words.
