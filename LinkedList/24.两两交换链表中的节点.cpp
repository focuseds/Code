/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* virtualHead = new ListNode();
        virtualHead->next = head;
        ListNode* cur = virtualHead;
        ListNode* pre;
        while (cur->next != nullptr) {
            pre = cur;
            cur = cur->next;

            if (cur == nullptr || cur->next == nullptr) break;

            pre->next = cur->next;
            cur->next = pre->next->next;
            pre->next->next = cur;
            pre = pre->next;
        }
        return virtualHead->next;
    }
};
// @lc code=end

