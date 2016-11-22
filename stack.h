//Gavin Henderson
//150010848

//Define stack header file and include frame header
#ifndef H_STACK_HEADER
#define H_STACK_HEADER
#include "frame.h"
#include <stdbool.h>

//Give the 'struct Stack' the name 'Stack' for shorthand use
typedef struct Stack Stack;

//Creates a blueprint for the Stack that includes 
//the current size and the head frame of the stack
struct Stack
{
	int size;
	Frame* head;
};

/*
Author: Gavin Henderson
Description: Creates a stack struc in memory
Paramaters: No paramaters
Returns: Returns a pointer to the memory location of the new stack
*/
Stack *createStack();

/*
Author: Gavin Henderson
Description: Takes in a pointer to a stack and returns true or false
depending on wether or not the stack is empty
Paramaters: Takes a pointer to the stack of that you want to check
Returns: Returns a boolean
True - Stack is empty
False - Stack has at least one item in it
*/
bool isEmpty(Stack* stk);

/*
Author: Gavin Henderson
Description: Adds an int to the top of the specified stack
Paramaters: Two paramaters
1) Pointer to the stack you want to push to
2) The int that you want to push to the stack
Returns: void return type
*/
void push(Stack* stk, int x);

/*
Author: Gavin Henderson
Description: Takes from the top of the stack and returns the value in that frame
and sets the next thing in the stack to the head
Paramaters: A pointer to the stack that you want to pop from
Returns: The int that you popped from the stack. If '-1' is returned
then stack is empty
*/
int pop(Stack* stk);

/*
Author: Gavin Henderson
Description: Sets the memory location it is passed to all 0's and frees it
Paramaters: Takes a pointer to the location of a stack to be deleted
Returns: Void return type
*/
void releaseStack(Stack* stk);

#endif