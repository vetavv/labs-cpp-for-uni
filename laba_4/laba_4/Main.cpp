#include<iostream>

#include"time_struct.h"
#include"task_1.h"
#include"task_2.h"
#include"task_3.h"
#include"task_4.h"
#include"task_5.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	char start = '*';
	char sep;
	int hours, minutes, seconds;
	long secs;
	int a, b;
	int count;
	time_struct time1, time2, time3;
	
	cout << "Лабораторная работа №4" << endl;
	while (start != '0') {
		cout << "\nВведите номер задания:\n* - очистить консоль\n0 - выход" << endl;
		cin >> start;
		switch (start)
		{
		
		case '1':
			cout << "\nВведите часы, минуты и секунды через пробел" << endl;
			cin >> hours >> minutes >> seconds;
			cout << "Время в секундах = " << hms_to_secs(hours, minutes, seconds) << endl;
			break;
		
		case '2':
			cout << "\nФункция, которая принимает время в форме структры:" << endl;
			cout << "Введите первое время: ";
			cin >> time1.hours >> sep >> time1.minutes >> sep >> time1.seconds;
			cout << "Введите второе время: ";
			cin >> time2.hours >> sep >> time2.minutes >> sep >> time2.seconds;
			cout << "Всего секунд = " << time_to_secs(time1, time2) << endl;

			cout << "\nФункция, которая возвращает секунды в форме структуры:" << endl;
			cout << "Введите количество секунд ";
			cin >> secs;
			time3 = secs_to_time(secs);
			cout << "Результат - " << time3.hours << ':' << time3.minutes << ':' << time3.seconds << endl;
			break;
		
		case '3':
			cout << "\nВведите значение переменной а: ";
			cin >> a;
			cout << "Введите значение переменной b: ";
			cin >> b;
			swap_int(&a, &b);
			cout << "Результат :\na = " << a << "\nb = " << b << endl;
			break;
		
		case '4':
			cout << "\nВведите первое время: ";
			cin >> time1.hours >> sep >> time1.minutes >> sep >> time1.seconds;
			cout << "Введите второе время: ";
			cin >> time2.hours >> sep >> time2.minutes >> sep >> time2.seconds;
			swap_struct(&time1, &time2);
			cout << "Результат :\nпервое время =  " << time1.hours << ':' << time1.minutes << ':' << time1.seconds << endl;
			cout << "второе время = " << time2.hours << ':' << time2.minutes << ':' << time2.seconds << endl;
			break;
		
		case '5':
			cout << "\nСколько раз вызвать функцию, использующую глобальную переменную?" << endl;
			cin >> count;
			for (int i = 0; i < count;  i++) {
				call_counter1();
				cout << globalCount << "-й вызов функции" << endl;
			}

			cout << "\nСколько раз вызвать функцию, использующую статическую локальную переменную?" << endl;
			cin >> count;
			for (int i = 0; i < count; i++) {
				cout << call_counter2() << "-й вызов функции" << endl;
			}
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