#include <iostream>
#include <string>
using namespace std;


int quest1() {
    int a, b;
    cout << "Введите начало диапозона: ";
    cin >> a;
    cout << "Введите конец диапозона: ";
    cin >> b;
    for (int j = a;j <= b;j++) {
        cout <<"Делители для числа: " << j << " - ";
        for (int i = 1;i <= j;i++) {
            if (j % i == 0) { cout << i << " "; }
        }
        cout << "\n";
    }
    return 0;
}

int quest2() {
    int a, b, c;
    cout << "Введите начало диапозона: ";
    cin >> a;
    cout << "Введите конец диапозона: ";
    cin >> b;
    for (int j = a;j <= b;j++) {
        c = 0;
        for (int i = 1;i <= j;i++) {
            if (j % i == 0) {
                c++;

            }
        }
        if ((c < 3)&&!(j<2)){ cout <<j<<" - Простое число\n"; }
    }
    return 0;
}

int quest3() {
    int a, b;
    cout << "Введите число, что будет и высотой и шириной фигуры: ";
    cin >> a;
    b = a;

    if (a<1){
        cout << "Ошибка: отрицательное найдено";
        return 0;
    }
    else if (a % 2 == 0) {
        cout << "Ошибка: фууу, чётное число";
        return 0;
    }
    for (int j = 1; j <= a;j++) {
        for (int i = 1;i <= b;i++) {
            if ((i==j)||((j+i)==a+1)||(j==(a+1)/2)||(i==(b+1)/2)) {
                cout << "*";
            }
            else { cout << " "; }
        }
        cout << "\n";
    }
    return 0;
}

int quest4() {
    string password;
    cout << "Введите пароль из 3-х цифр: ";
    cin >> password;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 10; i ++)
            if (i == password[j]-'0') { cout << j+1 << " цифра пароля - " << i<<"\n"; }
    }
    return 0;
}

int quest5() {
    int a, b, c=0;
    for (int j = 1; j <= 12; j++) {
        
        b = 0;
        for (int i = 1; i <= 3; i++) {
            cout <<"Сотрудник №"<<j<< " Введите ЗП за "<<i<<" месяц: ";
            cin >> a;
            b = b + a;
        }
        c = c + b;
        cout << "ЗП сотрудника "<<j<<" за квартал - " <<b<<"\n";
    }
    cout <<c<<" - сумма выплат сотрудникам\n";
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Ru");
    cout << "\n\n";
    cout << "ЗАДАНИЕ НОМЕР 1";
    cout << "\n\n";
    quest1();
    cout << "\n\n";
    cout << "ЗАДАНИЕ НОМЕР 2";
    cout << "\n\n";
    quest2();
    cout << "\n\n";
    cout << "ЗАДАНИЕ НОМЕР 3";
    cout << "\n\n";
    quest3();
    cout << "\n\n";
    cout << "ЗАДАНИЕ НОМЕР 4";
    cout << "\n\n";
    quest4();
    cout << "\n\n";
    cout << "ЗАДАНИЕ НОМЕР 5";
    cout << "\n\n";
    quest5();
    return 0;
}