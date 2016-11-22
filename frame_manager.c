//Gavin Henderson
//150010848

//Includes all the needed libraries and the frame header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "frame.h"

/*
Author: Gavin Henderson
Description: Mallocs memory of a new frame
Paramaters: Takes no parameters
Returns: A pointer to a new frame
*/
Frame* getFrame()
{
	Frame* newFrame = malloc(sizeof(Frame));
	return newFrame;
}

/*
Author: Gavin Henderson
Description: Sets the memory location it is passed to all 0's and frees it
Paramaters: Takes a pointer to the location of a frame to be deleted
Returns: Void return type
*/
void releaseFrame(Frame *oldFrame)
{
	memset(oldFrame, 0, sizeof(Frame));
	free(oldFrame);
}