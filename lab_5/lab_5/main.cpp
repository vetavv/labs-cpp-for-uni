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

	cout << "Лабораторная работа №5" << endl;
	while (start != '0') {
		cout << "\nВведите номер задания\n0 - выход\n* - очистить консоль" << endl;
		cin >> start;
		switch (start) {
		
		case '1':
			cout << "Сколько дробей вы хотите ввести (max = 10) ?" << endl;
			cin >> size;
			fillArrayWithFraction(fractions, size);
			average = averageFraction(fractions, size);
			cout << "Среднее значение: " << average.numerator << "/" << average.denominator << endl;
			break;
		
		case '2':
			cout << "Сколько чисел вы хотите ввести ( max = 10 ) ?" << endl;
			cin >> size;
			fillArrayWithInteger(numbers, size);
			index = indexOfMaxValue(numbers, size);
			cout << "\nМаксимальное число = " << numbers[index] << endl;
			cout << "Индекс максимального числа = " << index << endl;
			break;

		case '3':
			cout << "Введите предложение: ";
			cin.ignore();
			cin.getline(sentence, 144);
			reversit(sentence);
			cout << "Результат: " << sentence << endl;
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
			cout << "\nСреднее значение = " << result.foot << " ft " << result.inch << " in" << endl;
			break; 

		case '*':
			system("cls");
			cout << "Лабораторная работа №3" << endl;
			break;
		case '0':
			cout << "Программа завршена";
			break;
		default:
			cout << "Команда не найдена, повторите ввод" << endl;
			break;
		}
	}
	return 0;
 }


