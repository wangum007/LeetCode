
//Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

//Implement the MyStack class:

//void push(int x) Pushes element x to the top of the stack.
//int pop() Removes the element on the top of the stack and returns it.
//int top() Returns the element on the top of the stack.
//boolean empty() Returns true if the stack is empty, false otherwise.
//Notes:

//You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
//Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.


typedef struct {
    int val;
	int top;
	struct MyStack* prevs;
} MyStack;


MyStack* myStackCreate() {
	MyStack* rt = (MyStack*)calloc(1, sizeof(MyStack));
	rt->top = -1;
	rt->prevs = NULL;
	rt->val = 0;
	return rt;
}

void myStackPush(MyStack* obj, int x) {
	if(obj->top == -1){
		obj->top = 0;
		obj->val = x;
		obj->prevs = NULL;
	}
	else{
		MyStack* _new_obj = malloc(sizeof(MyStack));
		
		_new_obj->prevs = obj->prevs;
		_new_obj->val = obj->val;
		_new_obj->top = obj->top;
		obj->prevs = _new_obj;
		obj->val = x;
		obj->top ++;
	}
}

int myStackPop(MyStack* obj) {
	int rt;
	if(obj->top == -1){
		return -1;
	}
	else if(obj->top == 0){
		rt = obj->val;
		obj->val = 0;
		obj->top = -1;
	}
	else{
		MyStack* tmp_prv = obj->prevs;
		
		rt = obj->val;
		obj->prevs = tmp_prv->prevs;
		obj->val = tmp_prv->val;
		obj->top = tmp_prv->top;
		free(tmp_prv);
	}
	
	return rt;
}

int myStackTop(MyStack* obj) {
    return obj->val;
}

bool myStackEmpty(MyStack* obj) {
    return obj->top == -1;
}

void myStackFree(MyStack* obj) {
	MyStack* tmp;
	
	while(obj->top > 0){
		tmp = obj->prevs;
		obj->prevs = tmp->prevs;
		obj->val = tmp->val;
		obj->top = tmp->top;
		free(tmp);
	}
	free(obj);
}

