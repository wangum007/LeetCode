

//Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

//Implement the MyQueue class:

//void push(int x) Pushes element x to the back of the queue.
//int pop() Removes the element from the front of the queue and returns it.
//int peek() Returns the element at the front of the queue.
//boolean empty() Returns true if the queue is empty, false otherwise.
//Notes:

//You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
//Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
	



typedef struct {
    int s1_ptr;
	int S1[20];
	int S2[20];
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* rt = malloc(sizeof(MyQueue));
	
	rt->s1_ptr = -1;
	
	return  rt;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->s1_ptr++;
	if(obj->s1_ptr > 19){
		obj->s1_ptr--;
		return;
	}
	obj->S1[obj->s1_ptr] = x;
}

int myQueuePop(MyQueue* obj) {
	if(obj->s1_ptr == -1)
		return NULL;
	
    int i, rt = obj->S1[0];
	
	obj->s1_ptr--;
	if(obj->s1_ptr == -1)
		return rt;
	
	for(i = 0; i <= obj->s1_ptr; i++)
	{
		obj->S2[i] = obj->S1[obj->s1_ptr - i + 1];
	}
	for(i = 0; i <= obj->s1_ptr; i++)
	{
		obj->S1[i] = obj->S2[obj->s1_ptr - i];
	}
	
	return rt;
}

int myQueuePeek(MyQueue* obj) {
	if(obj->s1_ptr == -1)
		return NULL;
	
    return obj->S1[0];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->s1_ptr == -1;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/















