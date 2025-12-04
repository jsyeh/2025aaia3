// week13-2a.cpp 學習計畫 Linked List 第1題
// 21. Merge Two Sorted Lists 左邊list1 右邊list2 合起來
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 練習寫看看「資料結構」怎麼寫程式
        ListNode* ans = new ListNode(999); // 老師故意亂寫999
        ListNode* ans2 = new ListNode(888); // 老師故意亂寫888
        ans->next = ans2; // 把它們接起來
        // 先寫4行, 熟悉一下資料結構「怎麼new新的節點、怎麼接起來」
        return ans;
    }
};


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
