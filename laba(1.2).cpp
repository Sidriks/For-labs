#include <iostream>
#include <string>
using namespace std;
struct Date {
    int year;
    int month;
    int day;
};

struct Person {
    string first_name;
    string name;
    string middle_name;
    string position;
    int payday;
    Date date_of_birthday;
};

int main() {
    int amount_of_employs = 3;
    Person employs[amount_of_employs];
    
    for (int i = 0; i < amount_of_employs; i++) {
        cout << "Фамилия: ";
        cin >> employs[i].first_name;
        cout << "Имя: ";
        cin >> employs[i].name;
        cout << "Отчество: ";
        cin >> employs[i].middle_name;
        cout << "Должность: ";
        cin >> employs[i].position;
        cout << "Зарплата: ";
        cin >> employs[i].payday;
        cout << "Дата рождения через пробел в формате (yyyy mm dd): ";
        cin >> employs[i].date_of_birthday.year >> employs[i].date_of_birthday.month >> employs[i].date_of_birthday.day;
        cout << endl;
    }

    Date min_date;
    min_date.year = 0;
    min_date.month = 0;
    min_date.day = 0;

    for (int i = 0; i < amount_of_employs; i++) {
        if (employs[i].date_of_birthday.year > min_date.year) {
            min_date = employs[i].date_of_birthday;
        } else if (employs[i].date_of_birthday.year == min_date.year) {
            if (employs[i].date_of_birthday.month > min_date.month) {
                min_date = employs[i].date_of_birthday;
            } else if (employs[i].date_of_birthday.month == min_date.month) {
                if (employs[i].date_of_birthday.day > min_date.year) {
                    min_date = employs[i].date_of_birthday;
                }
            }
        }
    }

    for (int i = 0; i < amount_of_employs; i++) {
        if (employs[i].date_of_birthday.year == min_date.year && employs[i].date_of_birthday.month == min_date.month
            && employs[i].date_of_birthday.day == min_date.day) {
            cout << "Фамилия: " << employs[i].first_name;
            cout << "Имя: " << employs[i].name;
            cout << "Отчество: " << employs[i].middle_name;
            cout << "Должность: " << employs[i].position;
            cout << "Зарплата: " << employs[i].payday;
            cout << "Дата рождения через пробел в формате (yyyy mm dd): ";
            cout << employs[i].date_of_birthday.year << " " << employs[i].date_of_birthday.month << " " 
                 << employs[i].date_of_birthday.day;
            cout << endl;
        }
    }

    return 0;
}