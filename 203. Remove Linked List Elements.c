
//Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* ans = head;
	struct ListNode* last;
	struct ListNode* now;
	
    if(!ans)
			return ans;
            
	while(ans->val == val){
		ans = ans->next;
		if(!ans)
			return ans;
	}
	
	now = ans->next;
	last = ans;
	
	while(now){
		while(now->val == val){
			now = now->next;
			
			if(!now)
				break;
		}
		
		last->next = now;
		last = now;
		
		if(now)
			now = now->next;
	}
	
	return ans;
}

