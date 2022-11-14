#include "task_2.h"

long time_to_secs(time_struct time1, time_struct time2) {
	long result;
	result = (time1.seconds + time2.seconds) + 60 * (time1.minutes + time2.minutes) + 3600 * (time1.hours + time2.hours);
	return result;
}
time_struct secs_to_time(long secs) {
	time_struct time3;
	time3.hours = secs / 3600;
	time3.minutes = secs % 3600 / 60;
	time3.seconds = secs % 3600 % 60;
	return time3;
}