/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* virtualA = new ListNode();
        ListNode* virtualB = new ListNode();
        virtualA->next = headA;
        virtualB->next = headB;
        ListNode* curA = virtualA;
        ListNode* curB = virtualB;
        int lenA = 0;
        int lenB = 0;
        int diff = 0;
        bool flag = false;

        // 向后遍历到每个链表结尾，计数
        while (curA->next != nullptr || curB->next != nullptr) {
            if (curA->next != nullptr) {
                curA = curA->next;
                lenA = lenA + 1;
            }
            if (curB->next != nullptr) {
                curB = curB->next;
                lenB = lenB + 1;
            }
        }

        ListNode* posA = virtualA->next;
        ListNode* posB = virtualB->next;
        diff = abs(lenA - lenB);
        // 长的先向后移动
        while (diff > 0) {
            if (lenA > lenB) {
                posA = posA->next;
                diff = diff - 1;
            } else {
                posB = posB->next;
                diff = diff - 1;
            }
        }
        // 再同时向后移动
        while (posA != nullptr && posB != nullptr) {
            if (posA == posB) {
                flag = true;
                return posA;
            }
            posA = posA->next;
            posB = posB->next;
        }
        return nullptr;              
    }
};
// @lc code=end

