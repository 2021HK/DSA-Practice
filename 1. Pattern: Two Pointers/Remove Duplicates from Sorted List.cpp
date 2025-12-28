// Given the head of a sorted linked list, remove all duplicates so that each element appears only once.

// 🔹 Idea (Two Pointer / One Pass)

// Because the list is already sorted, duplicates will be adjacent

// Traverse the list

// If current->val == current->next->val

// Skip the duplicate node

// Else move forward

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;


        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Skip duplicate node
                current->next = current->next->next;
            } else {
                // Move to next distinct node
                current = current->next;
            }
        }
        return head;
    }
   
};
