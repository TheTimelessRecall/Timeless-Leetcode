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
    ListNode* middleNode(ListNode* head) {
        int count = 0;

        ListNode *temp = head;

        while (temp-> next != NULL) {
            temp = temp-> next;
            count++;
        }
        temp = head;

        int middle = count % 2 == 0 ? (count/2) : (count/2) + 1;

        for (int i = 0 ; i < middle ; i++) temp = temp-> next;

        return temp;
}
};