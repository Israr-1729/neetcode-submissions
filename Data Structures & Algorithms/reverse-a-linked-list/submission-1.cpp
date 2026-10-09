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
    vector<int> arrayCreator(ListNode* head)
    {
        ListNode* temp = head;
        vector<int> result;

        while(temp)
        {
            result.push_back(temp->val);
            temp = temp->next;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    ListNode* linkCreator(vector<int> arr)
    {
        ListNode* dummyHead = new ListNode(0);
        ListNode* temp = dummyHead;

        for(int i : arr)
        {
            ListNode* newNode = new ListNode(i);
            temp->next = newNode;
            temp = temp->next;
        }

        return dummyHead->next;
    }
    ListNode* reverseList(ListNode* head) {
        return linkCreator(arrayCreator(head));
    }
};
