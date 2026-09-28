#include <iostream>

using namespace std;

int quest1() {
    int a, b, c;
    cout << "Введите шестизначное число: ";
    cin >> a;
    if (a / 100000 == 0 || a /100000 >9) {
        cout << "Шестизначное требую!!!";
    }
    else {
        b = (a / 100000)%10 + ((a / 10000) % 10) + ((a / 1000) % 10);
        c = (a / 100)%10 + ((a / 10) % 10) + (a % 10);
        (c == b) ? cout << "Счастливое число :)" : cout << "Грустное число :(";
    }
    return 0;
}
int quest2() {
    int a, b, c, d;
    cout << "Введите чётырёхзначное число: ";
    cin >> a;
    if (a / 1000 == 0 || a / 1000 > 9) {
        cout << "ЧЕТЫРЁХзначное!!!";
    }
    else {
        b = (a / 100) % 10;
        c = (a / 10) % 10;
        d = a % 10;
        a = a / 1000;
        cout << "\nОтвет: " << b << a << d << c;
    }
    return 0;
}

int quest3() {
    int num1, num2, num3, num4, num5, num6, num7, max = 0;
    cout << "Введите первое число: ";
    cin >> num1;
    (max < num1) ? max = num1 : max = max;
    cout << "Введите второе число: ";
    cin >> num2;
    (max < num2) ? max = num2 : max = max;
    cout << "Введите третье число: ";
    cin >> num3;
    (max < num3) ? max = num3 : max = max;
    cout << "Введите четвёртое число: ";
    cin >> num4;
    (max < num4) ? max = num4 : max = max;
    cout << "Введите пятое число: ";
    cin >> num5;
    (max < num5) ? max = num5 : max = max;
    cout << "Введите шестое число: ";
    cin >> num6;
    (max < num6) ? max = num6 : max = max;
    cout << "Введите седьмое число: ";
    cin >> num7;
    (max < num7) ? max = num7 : max = max;
    cout << "\nОтвет:\n\tНаибольшее значение: " << max;
    return 0;

}

int quest4() {
    int a_b, b_c, kg, litr = 0;
    cout << "Введите расстояние от A до B: ";
    cin >> a_b;
    cout << "Введите расстояние от B до C: ";
    cin >> b_c;
    cout << "Введите массу груза в КГ: ";
    cin >> kg;
    if (kg < 500) {
        litr = 1;
    }
    else if (kg < 1000) {
        litr = 4;
    }
    else if (kg < 1500) {
        litr = 7;
    }
    else if (kg < 2000) {
        litr = 9;
    }
    else {
        cout << "Слишком тяжёлый груз";
    }
    (((a_b + b_c) * litr) < 300) ? cout << "\n" << (a_b + b_c) * litr << " литров для перевозки груза" : cout << "\nСлишком много топлива понадобиться :(";

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "\n";
    quest1();
    cout << "\n\n";
    quest2();
    cout << "\n\n";
    quest3();
    cout << "\n\n";
    quest4();
}

