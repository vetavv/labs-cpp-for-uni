#include "task_1.h"

long hms_to_secs(int hours, int minutes, int seconds) {
    long result = seconds;
    result += minutes * 60 + hours * 3600;
    return result;
}

