//Gavin Henderson
//150010848

//Include standard C libraries and stack and frame manager header files
#include <stdio.h>
#include "stack.h"
#include "frame_manager.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*
Author: Gavin Henderson
Description: Creates a stack struc in memory
Paramaters: No paramaters
Returns: Returns a pointer to the memory location of the new stack
*/
Stack *createStack()
{
	Stack *newStack = malloc(sizeof(Stack));
	newStack->size=0;
	return newStack;
}

/*
Author: Gavin Henderson
Description: Takes in a pointer to a stack and returns true or false
depending on wether or not the stack is empty
Paramaters: Takes a pointer to the stack of that you want to check
Returns: Returns a boolean
True - Stack is empty
False - Stack has at least one item in it
*/
bool isEmpty(Stack* stk){
	if(stk->size==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
Author: Gavin Henderson
Description: Adds an int to the top of the specified stack
Paramaters: Two paramaters
1) Pointer to the stack you want to push to
2) The int that you want to push to the stack
Returns: void return type
*/
void push(Stack* stk, int x){
	Frame* newFrame = getFrame();
	newFrame->data=x;
	newFrame->next=stk->head;
	stk->head=newFrame;
	stk->size+=1;
}

/*
Author: Gavin Henderson
Description: Takes from the top of the stack and returns the value in that frame
and sets the next thing in the stack to the head
Paramaters: A pointer to the stack that you want to pop from
Returns: The int that you popped from the stack. If '-1' is returned
then stack is empty
*/
int pop(Stack* stk){
	if(isEmpty(stk))
	{
		printf("You tried to pop when the stack is empty so -1 was returned\n");
		return -1;
	}
	else
	{
		Frame* poppedFrame = stk->head;
		stk->head = poppedFrame->next;
		int poppedData = poppedFrame->data;
		releaseFrame(poppedFrame);
		stk->size-=1;
		return poppedData;
	}
}

/*
Author: Gavin Henderson
Description: Sets the memory location it is passed to all 0's and frees it
Paramaters: Takes a pointer to the location of a stack to be deleted
Returns: Void return type
*/
void releaseStack(Stack* stk){
	memset(stk, 0, sizeof(Stack));
	free(stk);
}