/*
 * C program to implement stack. Queue is a LIFO data structure.
 * Queue operations: ENQUEUE(insert operation), DEQUEUE(Delete operation)
 * and Display stack.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


struct queue {
    int front, rear, size;
    unsigned capacity;
    int *array;
};
