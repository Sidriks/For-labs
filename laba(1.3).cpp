#include <iostream>
#include <string>

using namespace std;

struct ZNAK {
    char Name[32];
    string ZOD;
    int DATE[3];
};

int main() {
    const int array_size = 10;
    ZNAK MASS[array_size];
    for (int i = 0; i < array_size; i++) {
        cout << "Name: ";
        cin.getline(MASS[i].Name, 32);
        cout << "ZOD: ";
        cin >> MASS[i].ZOD;
        cout << "DATE: ";
        cin >> MASS[i].DATE[0] >> MASS[i].DATE[1] >> MASS[i].DATE[2];
    }

    string in_ZOD;
    int not_found = 1;
    cout << "Введите знак зодиака: ";
    cin >> in_ZOD;

    for (int i = 0; i < array_size; i++) {
        if (MASS[i].ZOD == in_ZOD) {
            cout << "Name: " << MASS[i].Name << endl;
            cout << "ZOD: " << MASS[i].ZOD;
            cout << "DATE: ";
            for (int j = 0; j < 3; j++) {
                cout << " " << MASS[j].DATE[j];
            }
            not_found = 0;
        }
    }

    if (not_found == 1) {
        cout << "Не найдкно" << endl;
    }
}