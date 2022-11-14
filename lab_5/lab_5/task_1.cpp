#include"task_1.h"

void fillArrayWithFraction(fraction numbers[], int size)
{
	char ch;
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ". ������� �����" << endl;
		cin >> numbers[i].numerator >> ch >> numbers[i].denominator;
		cout << "\n";
	}	
}

fraction averageFraction(fraction someFractions[], int size)
{
	fraction result = { 0, 1 };
	//����� �����������
	for (int i = 0; i < size; i++) {
		result.denominator *= someFractions[i].denominator;
	}
	//����� ����������
	for (int i = 0; i < size; i++) {
		someFractions[i].numerator *= (result.denominator / someFractions[i].denominator);
		result.numerator += someFractions[i].numerator;
	}
	//������� �������� ������
	while (result.numerator % size != 0) {
		result.denominator *= 10;
		result.numerator *= 10;
	}
	result.numerator /= size;
	//���������� �����
	for (int i = 2; i < result.denominator; i++) {
		while (result.numerator % i == 0 && result.denominator % i == 0) {
			result.numerator /= i;
			result.denominator /= i;
		}
	}
	return result;
}

