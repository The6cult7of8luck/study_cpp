#include <iostream>

using namespace std;

int quest1() {
    int a;
    cout << "Введите целое число: ";
    cin >> a;
    if (a % 2 == 0) {
        cout << a << " четное число";
    }
    else {
        cout << a << " не чётное число";
    }
    return 0;
}

int quest2() {
    int a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    if (a > b && a > c) { cout << a << " Наибольшее из этих трёх чисел"; }
    else if (b > a && b > c) { cout << b << " Наибольшее из этих трёх чисел"; }
    else { cout << c << " Наибольшее из этих трёх чисел"; }
    return 0;

}

int quest3() {
    int a;
    cout << "Введите число: ";
    cin >> a;
    if (a > 0) { cout << a << " положительное число"; }
    else if (a < 0) { cout << a << " отрицательное число"; }
    else { cout << a << " равно нулю"; }
    return 0;
}

int quest4() {
    short a;
    cout << "Введите кол-во баллов от 0 до 100: ";
    cin >> a;
    if (90 <= a && a<= 100) { cout << "Отлично!!!"; }
    else if (75 <= a && a<= 89) { cout << "Хорошо"; }
    else if (60 <= a && a <= 74) { cout << "Удовлетворительно"; }
    else if (0 <= a && a <= 59) { cout << "Неудовлетворительно"; }
    else { cout << "вы ввели не кол-во баллов от 0 до 100"; }
    return 0;
}

int quest5() {
    short a;
    cout << "Введите год: ";
    cin >> a;
    if (a % 4 == 0 && a % 100 != 0) { cout << a << " - високосный год"; }
    else { cout << a << " - не високосный год"; }
    return 0;
}

int quest6() {
    double a, b, c, d;
    cout << "Введите \"a\": ";
    cin >> a;
    cout << "Введите \"b\": ";
    cin >> b;
    cout << "Введите \"c\": ";
    cin >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        d = sqrt(d);
        cout << "\nx1= " << (-b - d) / (2 * a);
        cout << "\nx2= " << (-b + d) / (2 * a);

    }
    else if (d == 0) {
        cout << "\nx1= " << -b / (2 * a);
    }
    else { cout << "\nНе имеет корней"; }
    return 0;
}

int quest7() {
    int a, b, c;
    cout << "Введите длинну отрезка\"a\": ";
    cin >> a;
    cout << "Введите длинну отрезка\"b\": ";
    cin >> b;
    cout << "Введите длинну отрезка\"c\": ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) { cout << "Треугольник из таких отрезков существует"; }
    else { cout << "Треугольник из таких отрезков не существует"; }
    return 0;
}

int quest8() {
    double a, b, sim;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "\n1. Операция сложения" << "\n2. Операция вычитания" << "\n3. Операция умножения" << "\n4. Операция деления";
    cout << "\nВведите номер знака между числами: ";
    cin >> sim;
    if (sim == 1) { cout << "\n" << a << "+" << b << "=" << a + b; }
    else if (sim == 2) { cout << "\n" << a << "-" << b << "=" << a - b; }
    else if (sim == 3) { cout << "\n" << a << "*" << b << "=" << a * b; }
    else if (sim == 4) {
        if (b == 0) { cout << "\n" << "Делить на ноль нельзя"; }
        else {
            cout << "\n" << a << "/" << b << "=" << a / b;
        }
    }
    else { cout << "\n" << "Введите существующий номер!!!"; }
    return 0;
}
int quest9() {
    int a;
    cout << "Введите сумму покупки: ";
    cin >> a;
    if (0 <= a && a <= 1000) { cout << "Итоговая сумма покупки с учётом скидки: "<<a; }
    else if (1000 < a && a <= 5000) { cout << "Итоговая сумма покупки с учётом скидки: " << a-(a*0,05); }
    else if (5000 < a && a <= 10000) { cout << "Итоговая сумма покупки с учётом скидки: " << a-(a*0,10); }
    else if (10000 < a ) { cout << "Итоговая сумма покупки с учётом скидки: " << a-(a*0,15); }
    else { cout << "На кредит скидок нет!"; }
    return 0;
}
int quest10() {
    short a;
    cout << "Введите время (только часы): ";
    cin >> a;
    if (6 <= a && a < 12) { cout << "Доброе утро!!!"; }
    else if (12 <= a && a < 18) { cout << "Добрый день, вы позвонили в центр занятости\nизвините, но все наши операторы заняты."; }
    else if (18 <= a && a < 23) { cout << "Добрый вечер я диспечер"; }
    else if (23 <= a && a < 6) { cout << "Добрый ночер! Чаго не спим?"; }
    else { cout << "Время суток на других планетах не вычесляем, простите"; }
    return 0;
    return 0;
}
int main() {
    setlocale(LC_ALL, "RU");
    cout << "\n";
    quest1();
    cout << "\n\n";
    quest2();
    cout << "\n\n";
    quest3();
    cout << "\n\n";
    quest4();
    cout << "\n\n";
    quest5();
    cout << "\n\n";
    quest6();
    cout << "\n\n";
    quest7();
    cout << "\n\n";
    quest8();
    cout << "\n\n";
    quest9();
    cout << "\n\n";
    quest10();

}