#include "task_4.h"

void swap_struct(time_struct* time1, time_struct* time2) {
	time_struct time3 = *time1;
	*time1 = *time2;
	*time2 = time3;
}
