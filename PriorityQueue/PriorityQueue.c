#include <stdlib.h>
#include <Priority.h>


struct Task *create_task(int taskID, int priority) {
	struct Task *task = malloc(sizeof(struct Task));
	if(task) {
		task->taskID = taskID;
		task->priority = priority;
	}
	return task;
}

void swap_heap(heaptype heap, int pos1, int pos2) {
	struct Task *tmp = heap->data[pos1];
	heap->data[pos1] = heap->data[pos2];
	heap->data[pos2] = tmp;
}