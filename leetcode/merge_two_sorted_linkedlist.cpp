/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.*/
#include<iostream>
#include<list>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1. Create a dummy node to act as the start anchor of our new list
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // 2. Loop while both lists still have nodes to compare
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;  // Connect the smaller node
                list1 = list1->next; // Move … // Connect the smaller node
                list2 = list2->next; // Move pointer forward in list2
            }
            tail = tail->next; // Move our building tail pointer forward
        }

        // 3. Attach the remaining nodes of whichever list is left over
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // 4. The actual sorted list starts right after the dummy node
        return dummy.next;
    }
};
