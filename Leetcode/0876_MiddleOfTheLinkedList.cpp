class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* current = head;
        while (current != NULL) {
            current = current->next;
            length++;
        }
        
        int middleNode = length / 2;
        
        current = head;
        while (middleNode--) {
            current = current->next;
        }
        
        return current;
    }
};
