#pragma once;
#include<iostream>
using namespace std;

struct fraction {
	int numerator;
	int denominator;
};
void fillArrayWithFraction(fraction numbers[], int size);
fraction averageFraction(fraction someFractions[], int length);

