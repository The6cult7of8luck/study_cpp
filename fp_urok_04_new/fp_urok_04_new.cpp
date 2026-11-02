#include <iostream>
#include <string>
using namespace std;



int quest1() {
    long long digit;
    cout << "Введите число положительное: ";
    cin >> digit;
    for (;digit > 0;digit /= 10) {
        cout << digit % 10;
    }
    return 0;
}

int quest2() {
    long long digit, sum = 0;
    cout << "Введите число положительное: ";
    cin >> digit;
    for (int i = digit;i > 0;i /= 10) {
        sum = sum + (i % 10);
    }
    cout << "Сумма цифр числа " << digit << " равна: " << sum;
    return 0;
}

int quest3() {
    long long n = 0, dist = 0;
    cout << "Введите сколько дней чапала улитка: ";
    cin >> n;
    for (int i = 15; n > 0; i += 2) {
        dist = dist + i;
        n--;
    }
    cout << "Улитка прошла: " << dist << "cm";
    return 0;
}

int quest4() {
    short digit = 0;
    bool igl;
    for (int i = 9; i > 0; i--) {
        cout << "Введите (орёл - 1, решка - 0): ";
        cin >> igl;
        digit = digit + igl;
    }
    ((digit % 2 == 0) && (digit != 0)) ? cout << "Делай положительно" : cout << "Вот щас отрицательно";
    return 0;
}

int quest5() {
    short month, day = 0, n = 0, j = 1, week_day;
    string name;
    cout << "Введите номер месяца: ";
    cin >> month;
    cout << "Введите номер дня недели: ";
    cin >> week_day;

    switch (month) {
    case 1:
        name = "Январь";
        n = 31;
        break;
    case 2:
        name = "Февраль";
        n = 28;
        break;
    case 3:
        name = "Март";
        n = 31;
        break;
    case 4:
        break;
        name = "Апрель";
        n = 30;
        break;
    case 5:
        name = "Май";
        n = 31;
        break;
    case 6:
        name = "Июнь";
        n = 30;
        break;
    case 7:
        name = "Июль";
        n = 31;
        break;
    case 8:
        name = "Август";
        n = 31;
        break;
    case 9:
        name = "Сентябрь";
        n = 30;
        break;
    case 10:
        name = "Октябрь";
        n = 31;
        break;
    case 11:
        name = "Ноябрь";
        n = 30;
        break;
    case 12:
        name = "Декабрь";
        n = 31;
        break;
    default:
        cout << "Месяцев всего двенадцать";
        return 0;
        break;
    }

    if (!(week_day > 0 && week_day < 8)) {
        cout << "Всего 7 дней в неделе";
        return 0;
    }
    cout << "\t\t\t\t" << name << "\n";
    cout << "\n\tПн\tВт\tСр\tЧт\tПт\tСб\tВс";

    switch (week_day) {
    case 1:
        cout << "\n\t1\t2\t3\t4\t5\t6\t7\n";
        day = 8;
        break;
    case 2:
        cout << "\n\t-\t1\t2\t3\t4\t5\t6\n";
        day = 7;
        break;
    case 3:
        cout << "\n\t-\t-\t1\t2\t3\t4\t5\n";
        day = 6;
        break;
    case 4:
        cout << "\n\t-\t-\t-\t1\t2\t3\t4\n";
        day = 5;
        break;
    case 5:
        cout << "\n\t-\t-\t-\t-\t1\t2\t3\n";
        day = 4;
        break;
    case 6:
        cout << "\n\t-\t-\t-\t-\t-\t1\t2\n";
        day = 3;
        break;
    case 7:
        cout << "\n\t-\t-\t-\t-\t-\t-\t1\n";
        day = 2;
        break;
    default:
        break;
    }

    for (int i = day; i <= n; i++) {
        if (j % 7 == 0) {
            cout << "\t" << i << "\n";
        }
        else {
            cout << "\t" << i;
        }
        j++;
    }
    return 0;
}
int main() {
    setlocale(LC_ALL, "Ru");
    short chouce;
    while (true) {
        cout << "\n\nВведите номер задания (или 0 чтобы прекратить): ";
        cin >> chouce;
        switch (chouce) {
        case 0:
            break;
        case 1:
            cout << "\n\n------------------------------------------------------------\n\n";
            quest1();
            break;
        case 2:
            cout << "\n\n------------------------------------------------------------\n\n";
            quest2();
            break;
        case 3:
            cout << "\n\n------------------------------------------------------------\n\n";
            quest3();
            break;
        case 4:
            cout << "\n\n------------------------------------------------------------\n\n";
            quest4();
            break;
        case 5:
            cout << "\n\n------------------------------------------------------------\n\n";
            quest5();
            break;
        default:
            cout << "ERROR!!!ОШИБКА!!!ДАВА-ВА-ВАЙ ЗА-ЗА-ЗАНОГО!!!";
            break;
        }
        if (chouce == 0) {
            cout << "Досвидание!";
            break;
        }
    }
    return 0;
}
