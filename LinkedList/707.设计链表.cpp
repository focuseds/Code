/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode * next;
        LinkedNode(int val):val(val), next(nullptr) {}
    };
    
    MyLinkedList() {
        _virtualHead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        LinkedNode * cur = _virtualHead->next;
        while (cur != nullptr && index + 1 <= _size) {
            if (index == 1) {
                return cur->next->val;
            }
            cur = cur->next;
            index = index - 1;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        LinkedNode * newNode = new LinkedNode(val);
        newNode->next = _virtualHead->next;
        _virtualHead->next = newNode;
        _size = _size + 1;
    }
    
    void addAtTail(int val) {
        LinkedNode * cur = _virtualHead->next;
        LinkedNode * newNode = new LinkedNode(val);
        while (cur != nullptr) {
            cur = cur->next;
            if (cur->next == nullptr) {
                cur->next = newNode;
                _size = _size + 1;
            }
        }
    }
    
    void addAtIndex(int index, int val) {
        LinkedNode * newNode = new LinkedNode(val);
        LinkedNode * cur = _virtualHead->next;
        while (cur != nullptr && index + 1 <= _size) {
            if (index == 1) {
                newNode->next = cur->next;
                cur->next = newNode;
                _size = _size + 1;
            }
            cur = cur->next;
            index = index - 1;
        }
    }
    
    void deleteAtIndex(int index) {
        LinkedNode * cur = _virtualHead->next;
        while (cur != nullptr && index + 1 <= _size) {   //
            if (index == 1) {
                LinkedNode * tmp = cur->next;
                cur->next = tmp->next;
                delete tmp;
                _size = _size - 1;
            }
            cur = cur->next;
            index = index - 1;
        }
        
    }

private:
    LinkedNode * _virtualHead;
    int _size;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

