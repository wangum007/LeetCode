
//Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

//For example, the following two linked lists begin to intersect at node c1:


//The test cases are generated such that there are no cycles anywhere in the entire linked structure.

//Note that the linked lists must retain their original structure after the function returns.

//Custom Judge:

//The inputs to the judge are given as follows (your program is not given these inputs):

//intersectVal - The value of the node where the intersection occurs. This is 0 if there is no intersected node.
//listA - The first linked list.
//listB - The second linked list.
//skipA - The number of nodes to skip ahead in listA (starting from the head) to get to the intersected node.
//skipB - The number of nodes to skip ahead in listB (starting from the head) to get to the intersected node.
//The judge will then create the linked structure based on these inputs and pass the two heads, headA and headB to your program. If you correctly return the intersected node, then your solution will be accepted.

int get_len(struct ListNode *head_){
	int rt = 0;
	
	while(head_){
		rt++;
		head_ = head_->next;
	}
	return rt;
}
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	struct ListArr{
//		int val;
		struct ListNode* ptr;
	};
		
	int lenA = get_len(headA), lenB = get_len(headB), i;
	struct ListArr arrA[lenA];
	struct ListArr arrB[lenB];
	struct ListNode* ans = NULL;
	
	
	for(i = 0; i < lenA; i++){
		arrA[i].ptr = headA;
		headA = headA->next;
	}
	
	for(i = 0; i < lenB; i++){
		arrB[i].ptr = headB;
		headB = headB->next;
	}
	
	while(lenA && lenB){
		if(arrA[lenA - 1].ptr == arrB[lenB - 1].ptr){
			ans = arrA[lenA - 1].ptr;
		}
		
		lenA--;
		lenB--;
	}
	
	return ans;
}

