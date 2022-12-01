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

// 头节点和其他节点分开处理
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         // 删除头结点
//         while (head != nullptr && head->val == val) {
//             ListNode * tmp = head;
//             head = tmp->next;
//             delete tmp;
//         }
//         // 删除非头结点
//         ListNode * cur = head;
//         while (cur != nullptr && cur->next != nullptr) {
//             if (cur->next->val == val) {
//                 ListNode * tmp = cur->next;
//                 cur->next = tmp->next;
//                 delete tmp;
//             } else {
//                 cur = cur->next;
//             }
//         }
//         return head;
//     }
// };

// 设置虚拟头节点
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * pos = new ListNode();
        pos->next = head;
        ListNode * cur = pos;
        while (cur != nullptr && cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode * tmp = cur->next;
                cur->next = tmp->next;
                delete tmp;
            } else {
                cur = cur->next;
            }
        }
        return pos->next;
    }
};
// @lc code=end

