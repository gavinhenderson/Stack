//Gavin Henderson
//150010848

//Define frame manager header file and include frame header
#ifndef H_FRAME_MANAGER_HEADER
#define H_FRAME_MANAGER_HEADER
#include "frame.h"

/*
Author: Gavin Henderson
Description: Mallocs memory of a new frame
Paramaters: Takes no parameters
Returns: A pointer to a new frame
*/
Frame *getFrame();

/*
Author: Gavin Henderson
Description: Sets the memory location it is passed to all 0's and frees it
Paramaters: Takes a pointer to the location of a frame to be deleted
Returns: Void return type
*/
void releaseFrame(Frame *oldFrame);

#endif