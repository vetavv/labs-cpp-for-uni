#include "task_4.h"

employee getData()
{
    employee man;
    cout << "������� ��� ����������: ";
    cin.ignore();
    gets_s(man.name);
    cout << "������� ����� ����������: ";
    cin >> man.number;
    return man;
}

void putData(employee employee1)
{
    cout << endl;
    cout << "��� ����������: " << employee1.name << endl;
    cout << "����� ����������: " << employee1.number << endl;
}
