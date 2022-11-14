#include "task_5.h"
int globalCount = 0;

void call_counter1() {
	globalCount++;
}

int call_counter2() {
	static int count = 0;
	count++;
	return count;
 }