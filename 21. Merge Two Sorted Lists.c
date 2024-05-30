
//You are given the heads of two sorted linked lists list1 and list2.

//Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

//Return the head of the merged linked list.
	
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
	if((list1 == NULL) && (list2 == NULL))
		return list1;
	else if(list1 == NULL)
		return list2;
	else if(list2 == NULL)
		return list1;
	
	struct ListNode* tmp1;
	struct ListNode* ans;
	
	if(list1->val <= list2->val){
		ans = list1;
		tmp1 = ans;
		list1 = list1->next;
	}
	else{
		ans = list2;
		tmp1 = ans;
		list2 = list2->next;
	}
	
	while(tmp1 != NULL){
		if((list1 != NULL) && (list2 != NULL)){
			if(list1->val < list2->val){
				tmp1->next = list1;
				tmp1 = tmp1->next;
				list1 = list1->next;
			}
			else{
				tmp1->next = list2;
				tmp1 = tmp1->next;
				list2 = list2->next;
			}
		}
		else if(list1 == NULL){
			tmp1->next = list2;
			break;
		}
		else if(list2 == NULL){
			tmp1->next = list1;
			break;
		}
	}
	
	return ans;
}

