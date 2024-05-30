
//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
	if(head == NULL)
		return head;
	
	struct ListNode* tmp = head->next;
	struct ListNode* last = head;
	
	while(tmp != NULL){
		if(last->val == tmp->val){
			last->next = tmp->next;
			tmp = tmp->next;
		}
		else{
			last = tmp;
			tmp = tmp->next;
		}
	}
	
	return head;
}

