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
        if (index < 0 || index + 1 > _size) {
            return -1;
        }
        LinkedNode * cur = _virtualHead;
        while (index != -1) {
            cur = cur->next;
            index = index - 1;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode * newNode = new LinkedNode(val);
        newNode->next = _virtualHead->next;
        _virtualHead->next = newNode;
        _size = _size + 1;
    }
    
    void addAtTail(int val) {
        LinkedNode * cur = _virtualHead;
        LinkedNode * newNode = new LinkedNode(val);
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
        _size = _size + 1;
    }
    
    void addAtIndex(int index, int val) {
        LinkedNode * newNode = new LinkedNode(val);
        LinkedNode * cur = _virtualHead;
        if (index  == _size) {
            this->addAtTail(val);
        } else if (index + 1 > _size) {} 
        else {
            while (index != 0) {
                cur = cur->next;
                index = index - 1;
            }
            newNode->next = cur->next;
            cur->next = newNode;
            _size = _size + 1;
        }
    }
    
    void deleteAtIndex(int index) {
        LinkedNode * cur = _virtualHead;
        if (index < 0 || index + 1 > _size) {} else {
            while (index != -1) {
                if (index == 0) {
                    LinkedNode * tmp = cur->next;
                    cur->next = tmp->next;
                    delete tmp;
                    _size = _size - 1;
                }
                cur = cur->next;
                index = index - 1;
            }
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

