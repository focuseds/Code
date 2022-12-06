/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // 判定是否有环
        ListNode* slow = head;
        ListNode* quick = head;
        bool isRing = false;
        while (slow != nullptr && quick != nullptr) {
            quick = quick->next;
            if (quick != nullptr) {
                quick = quick->next;
            } else {
                return nullptr;
            }
            slow = slow->next;
            if (quick == slow) isRing = true;

            // 有环
            if (isRing) {
                ListNode* newHead = head;
                while (quick != newHead) {
                    newHead = newHead->next;
                    quick = quick->next;
                }
                return quick;
            }
        }
        return nullptr;
    }
};
// @lc code=end

