#pragma once
#include<iostream>
#include<string>
using namespace std;

struct employee {
	char name[144];
	long number;
};
employee getData();
void putData(employee employee1);
