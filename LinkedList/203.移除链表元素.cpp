/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        // 删除头结点
        while (head != nullptr && head->val == val) {
            ListNode * tmp = head;
            head = head->next;
            delete tmp;
        }
        // 删除非头结点
        ListNode * pos = head;
        while (pos != nullptr && pos->next != nullptr) {
            if (pos->next->val == val) {
                ListNode * tmp = pos->next;
                pos->next = pos->next->next;
                delete tmp;
            } else {
                pos = pos -> next;
            }
        }
        return head;
    }
};
// @lc code=end

