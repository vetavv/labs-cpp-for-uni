#include<Windows.h>
#include"task_1.h"
#include"task_2.h"
#include"task_3.h"
#include"task_4.h"
#include"task_5.h"

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int size;
	fraction fractions[10];
	fraction average;
	int numbers[10];
	int index;

	char sentence[144];
	employee employees[3];
	distance_struct distance[5];
	distance_struct result;
	char start = '*';

	cout << "������������ ������ �5" << endl;
	while (start != '0') {
		cout << "\n������� ����� �������\n0 - �����\n* - �������� �������" << endl;
		cin >> start;
		switch (start) {
		
		case '1':
			cout << "������� ������ �� ������ ������ (max = 10) ?" << endl;
			cin >> size;
			fillArrayWithFraction(fractions, size);
			average = averageFraction(fractions, size);
			cout << "������� ��������: " << average.numerator << "/" << average.denominator << endl;
			break;
		
		case '2':
			cout << "������� ����� �� ������ ������ ( max = 10 ) ?" << endl;
			cin >> size;
			fillArrayWithInteger(numbers, size);
			index = indexOfMaxValue(numbers, size);
			cout << "\n������������ ����� = " << numbers[index] << endl;
			cout << "������ ������������� ����� = " << index << endl;
			break;

		case '3':
			cout << "������� �����������: ";
			cin.ignore();
			cin.getline(sentence, 144);
			reversit(sentence);
			cout << "���������: " << sentence << endl;
			break;

		case '4':
			for (int i = 0; i < 3; i++) {
				employees[i] = getData();
			}
			for (int i = 0; i < 3; i++) {
				putData(employees[i]);
			}
			cout << endl;
			break;

		case '5' :
			size = 5;
			for (int i = 0; i < size; i++) {
				distance[i] = setDistance();
			}
			result = averageDistance(distance, size);
			cout << "\n������� �������� = " << result.foot << " ft " << result.inch << " in" << endl;
			break; 

		case '*':
			system("cls");
			cout << "������������ ������ �3" << endl;
			break;
		case '0':
			cout << "��������� ��������";
			break;
		default:
			cout << "������� �� �������, ��������� ����" << endl;
			break;
		}
	}
	return 0;
 }


