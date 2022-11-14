#include "task_3.h"

void reversit(char sentence[]) {
	int length = strlen(sentence) - 1;
	int middleIndex = length / 2;
	char swap;
	for (int i = 0; i <= middleIndex; i++) {
		swap = sentence[i];
		sentence[i] = sentence[length - i];
		sentence[length - i] = swap;
	}
}
