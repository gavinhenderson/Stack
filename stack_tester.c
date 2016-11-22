//Gavin Henderson
//150010848

#include "stack.h"
#include <stdio.h>
#include <stdbool.h>

int main(){
	//Example of the createStack method working
	Stack* stk = createStack();
	
	//Example of isEmpty returning false
	printf("Stack Empty: %d\n",isEmpty(stk));
	
	//Example of push working
	push(stk,1);
	
	//Example of isEmpty returning true
	printf("Stack Empty: %d\n",isEmpty(stk));
	
	//Example of popping
	printf("\nPopped: %d\n", pop(stk));
	
	//An example of popping working when stack is empty
	printf("Popped: %d\n", pop(stk));
	
	//An example of multiple popping and pushing to show
	//that the stack pops and pushes correctly
	push(stk,1);
	push(stk,2);
	push(stk,3);
	printf("\nPopped: %d\n", pop(stk));
	printf("Popped: %d\n", pop(stk));
	printf("Popped: %d\n", pop(stk));

	//An example of the releasing the stack working
	releaseStack(stk);
}