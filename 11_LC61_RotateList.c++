class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        ListNode* temp = head;
        int length = 1;

        // Find length and last node
        while (temp->next != NULL) {
            temp = temp->next;
            length++;
        }

        // Reduce unnecessary rotations
        k = k % length;

        if (k == 0) {
            return head;
        }

        // Make the list circular
        temp->next = head;

        // Find new last node
        int steps = length - k;
        ListNode* newLast = head;

        for (int i = 1; i < steps; i++) {
            newLast = newLast->next;
        }

        // Set new head
        ListNode* newHead = newLast->next;

        // Break the circle
        newLast->next = NULL;

        return newHead;
    }
};
