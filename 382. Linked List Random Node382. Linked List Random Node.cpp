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
    ListNode *root;
public:
    Solution(ListNode* head) {
        root = head;
    }
    
    int getRandom() {
        int i = 1, ans = 0;

        ListNode *temp = root;

        while(temp){
            if(rand() % i == 0) ans = temp -> val;
            i++;
            temp = temp -> next;
        }

        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */