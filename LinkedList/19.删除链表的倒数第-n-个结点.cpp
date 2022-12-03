/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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

// double ptr
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* virtualHead = new ListNode();
        virtualHead->next = head;
        ListNode* cur = virtualHead;
        ListNode* target = virtualHead;
        // move to end
        int length = 0;
        while (cur != nullptr) {
            length = length + 1;
            cur = cur->next;
        }
        for (int j=0;j<length-n-1;j++) {
            target = target->next;
        }
        ListNode* tmp = target->next;
        target->next = tmp->next;
        delete tmp;
        return virtualHead->next;
    }
};
// @lc code=end

