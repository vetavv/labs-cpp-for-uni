#include "task_4.h"

employee getData()
{
    employee man;
    cout << "Введите имя сотрудника: ";
    cin.ignore();
    gets_s(man.name);
    cout << "Введите номер сотрудника: ";
    cin >> man.number;
    return man;
}

void putData(employee employee1)
{
    cout << endl;
    cout << "Имя сотрудника: " << employee1.name << endl;
    cout << "Номер Сотрудника: " << employee1.number << endl;
}
