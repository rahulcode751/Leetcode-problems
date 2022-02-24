/** You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.
For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.
Return the head of the modified linked list.
Input: head = [0,3,1,0,4,5,2,0]
Output: [4,11]
Explanation:
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 3 + 1 = 4.
- The sum of the nodes marked in red: 4 + 5 + 2 = 11.
**/


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
    ListNode* mergeNodes(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* mynode = new ListNode(0,NULL);
        ListNode* temp = mynode;
        int s = 0;
        head = head->next;
        while(head != NULL){
            if(head->val == 0){
                mynode->next = new ListNode(s);
                mynode = mynode->next;
                s= 0;
                head = head->next;
            }
            else{
                s = s+head->val;
                head = head->next;
            }
        }
        return temp->next;
    }
};
