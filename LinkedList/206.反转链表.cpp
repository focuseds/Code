/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode * pre = nullptr;
//         ListNode * cur = head;
//         // ListNode * next = cur->next 会越界操作空指针
//         ListNode * next;

//         while (cur) {
//             next = cur->next;
//             cur->next = pre;
//             pre = cur;
//             cur = next;
//         }
//         return pre;
//     }
// };

// recursion
class Solution {
public:
    ListNode * reverse(ListNode * pre, ListNode * cur) {
        // 终止条件
        if (cur == nullptr) return pre;
        // 反转操作
        ListNode * next;
        next = cur->next;
        cur->next = pre;
        // 反转下一对pre和cur
        return reverse(cur, next);
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(nullptr, head);
    }
};
// @lc code=end

