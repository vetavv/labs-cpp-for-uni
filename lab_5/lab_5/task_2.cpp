#include "task_2.h"


void fillArrayWithInteger(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        cout << i + 1 << ". ¬ведите целое число: ";
        cin >> numbers[i];
    }
}

int indexOfMaxValue(int numbers[], int length)
{
    int index = 0;
    for (int i = 1; i < length; i++) {
        if (numbers[i] > numbers[index]) {
            index = i;
        }
    }
    return index;
}
