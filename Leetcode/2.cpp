// Dec 14, 2024

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* final_node = nullptr;
        ListNode* prev_node = nullptr;
        ListNode* start_node = nullptr;
        int keep = 0;
        while (l1 != nullptr || l2 != nullptr || keep)
        {
            final_node = new ListNode;
            if (prev_node != nullptr) prev_node->next = final_node;
            if (start_node == nullptr) start_node = final_node;

            if (l1 != nullptr && l2 != nullptr)
            {
                int sum = l1->val + l2->val + keep;

                final_node->val = (sum % 10);

                prev_node = final_node;
                final_node = final_node->next;

                keep = sum / 10;
            }
            else if (l2 != nullptr)
            {
                int sum = l2->val + keep;

                final_node->val = (sum % 10);

                prev_node = final_node;
                final_node = final_node->next;

                keep = sum / 10;
            }
            else if (l1 != nullptr)
            {
                int sum = l1->val + keep;
                final_node->val = (sum % 10);

                prev_node = final_node;
                final_node = final_node->next;

                keep = sum / 10;
            }
            else
            {
                final_node->val = keep;
                keep = 0;
            }

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return start_node;
    }
};