/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        int targetIndex = length - n;

        if (targetIndex == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* ptr = head;
        for (int i = 0; i < targetIndex - 1; i++) {
            ptr = ptr->next;
        }

        ListNode* nodeToDelete = ptr->next;
        ptr->next = ptr->next->next;
        delete nodeToDelete; 

        return head;
    }
};