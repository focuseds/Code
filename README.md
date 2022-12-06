# Code for learning

## Notes

1. 数组中常用的方法

    ||方法名|要点|备注|
    |---|---|---|---|
    |1|二分查找|注意边界|/|
    |2|双指针法|注意边界|/|
    |3|滑动窗口法|用`一个for循环`表示数组索引|该索引一定是`终止位置`|
    |4|模拟法|主要考察边界处理代码能力|/|

    ![数组总结](./Array/pics/数组总结.png)

2. 链表

    ||方法名|要点|备注|
    |---|---|---|---|
    |1|虚拟头节点|注意移除`头节点`和`非头节点`是不一样的，`链表的其他节点都是通过前一个节点来移除当前节点`，而头结点没有前一个节点|/|

    ![链表总结](./LinkedList/pics/链表总结.png)

3. 哈希表

    ||方法名|要点|备注|
    |---|---|---|---|
    |1|拉链法|发生冲突的元素都被存储在链表中|要选择适当的哈希表的大小，这样既不会因为数组空值而浪费大量内存，也不会因为链表太长而在查找上浪费太多时间|
    |2|线性探测法|冲突位置向下找一个空位放置新的的信息|要保证tableSize大于dataSize|
