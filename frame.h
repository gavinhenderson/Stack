//Gavin Henderson
//150010848

//Define frame header
#ifndef H_FRAME_HEADER
#define H_FRAME_HEADER

//Give the 'struct Frame' the name 'Frame' for shorthand use
typedef struct Frame Frame;

//Creates a blueprint for the Frame that includes 
//the data and the next Frame in the stack 
struct Frame
{
	int data;
	Frame *next;
};

#endif