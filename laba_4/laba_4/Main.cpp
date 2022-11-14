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
	
	cout << "������������ ������ �4" << endl;
	while (start != '0') {
		cout << "\n������� ����� �������:\n* - �������� �������\n0 - �����" << endl;
		cin >> start;
		switch (start)
		{
		
		case '1':
			cout << "\n������� ����, ������ � ������� ����� ������" << endl;
			cin >> hours >> minutes >> seconds;
			cout << "����� � �������� = " << hms_to_secs(hours, minutes, seconds) << endl;
			break;
		
		case '2':
			cout << "\n�������, ������� ��������� ����� � ����� ��������:" << endl;
			cout << "������� ������ �����: ";
			cin >> time1.hours >> sep >> time1.minutes >> sep >> time1.seconds;
			cout << "������� ������ �����: ";
			cin >> time2.hours >> sep >> time2.minutes >> sep >> time2.seconds;
			cout << "����� ������ = " << time_to_secs(time1, time2) << endl;

			cout << "\n�������, ������� ���������� ������� � ����� ���������:" << endl;
			cout << "������� ���������� ������ ";
			cin >> secs;
			time3 = secs_to_time(secs);
			cout << "��������� - " << time3.hours << ':' << time3.minutes << ':' << time3.seconds << endl;
			break;
		
		case '3':
			cout << "\n������� �������� ���������� �: ";
			cin >> a;
			cout << "������� �������� ���������� b: ";
			cin >> b;
			swap_int(&a, &b);
			cout << "��������� :\na = " << a << "\nb = " << b << endl;
			break;
		
		case '4':
			cout << "\n������� ������ �����: ";
			cin >> time1.hours >> sep >> time1.minutes >> sep >> time1.seconds;
			cout << "������� ������ �����: ";
			cin >> time2.hours >> sep >> time2.minutes >> sep >> time2.seconds;
			swap_struct(&time1, &time2);
			cout << "��������� :\n������ ����� =  " << time1.hours << ':' << time1.minutes << ':' << time1.seconds << endl;
			cout << "������ ����� = " << time2.hours << ':' << time2.minutes << ':' << time2.seconds << endl;
			break;
		
		case '5':
			cout << "\n������� ��� ������� �������, ������������ ���������� ����������?" << endl;
			cin >> count;
			for (int i = 0; i < count;  i++) {
				call_counter1();
				cout << globalCount << "-� ����� �������" << endl;
			}

			cout << "\n������� ��� ������� �������, ������������ ����������� ��������� ����������?" << endl;
			cin >> count;
			for (int i = 0; i < count; i++) {
				cout << call_counter2() << "-� ����� �������" << endl;
			}
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