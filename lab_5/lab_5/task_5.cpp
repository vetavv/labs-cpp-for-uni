#include "task_5.h"

distance_struct setDistance() {
    distance_struct dist;
    cout << "¬ведите футы и дюймы через пробел: ";
    cin >> dist.foot >> dist.inch;
    return dist;
}

distance_struct averageDistance(distance_struct fiveDistances[], int length)
{
    distance_struct averageaResult = {0, 0};
    for (int i = 0; i < length; i++) {
        averageaResult.inch += fiveDistances[i].inch + (fiveDistances[i].foot * 12);
    }
    averageaResult.inch /= length;
    averageaResult.foot = averageaResult.inch / 12;
    averageaResult.inch = averageaResult.inch - (averageaResult.foot * 12);
    return averageaResult;
}
