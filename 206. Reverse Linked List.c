
//Given the head of a singly linked list, reverse the list, and return the reversed list.


struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* now = head;
	struct ListNode* last = NULL;
	struct ListNode* next = NULL;
	
	while(now){
		next = now->next;
		now->next = last;
		last = now;
		now = next;
	}
	
	return last;
}

