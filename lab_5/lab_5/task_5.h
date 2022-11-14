#pragma once
#include<iostream>
using namespace std;

struct distance_struct {
	int foot;
	double inch;
};
distance_struct setDistance();
distance_struct averageDistance(distance_struct fiveDistances[], int length);