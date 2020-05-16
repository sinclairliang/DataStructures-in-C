#ifndef _PRIORITY_QUEUE_H
#define _PRIORITY_QUEUE_H

#include <stdlib.h>

struct Task{
	int TaskID;
	int priority;
}

struct Heap{
	int capacity;
	int size;
	struct Task **data;
};

typedef struct Heap *heaptype;