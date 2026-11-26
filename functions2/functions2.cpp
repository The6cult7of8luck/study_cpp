#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int quest1(int num); //
int quest2(int who, int why); //
int quest3(int n, int k); //
long long quest4(long long who); //
int quest5(int digit); //
int quest6(const int arr[], const int size); //
int quest7(int arr[], const int size); //
int quest8(int who); //
int quest9(int arr[], const int size); //

int main() {
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    int who;
    int number;
    int const size = 10;
    while (true) {
        cout << "\n\n=============== MENU =================\n";
        cout << "\n1. Задание 1: куб числа";
        cout << "\n2. Задание 2: наибольшее из двух";
        cout << "\n3. Задание 3: прямоугольник N*K";
        cout << "\n4. Задание 4: факториал от 0 до 20";
        cout << "\n5. Задание 5: простое число";
        cout << "\n6. Задание 6: min и max в массиве";
        cout << "\n7. Задание 7: инверсия массива";
        cout << "\n8. Задание 8: 1 - если +, 0 - если -";
        cout << "\n9. Задание 9: кол-во простых в массиве";
        cout << "\n0. Выход";
        cout << "\nВведите номер действия: ";
        cin >> number;
        cout << "\n=============== MENU =================";
        switch (number)
        {
        case 1: {
            cout << "\n\n===== ЗАДААНИЕ 1 =====\n\n";
            int num;
            cout << "Введите число: ";
            cin >> num;
            cout << "Число " << num << " в кубе: " << quest1(num);
            break;
        }
        case 2: {
            cout << "\n\n===== ЗАДААНИЕ 2 =====\n\n";
            int why;
            cout << "Введите первое число: ";
            cin >> who;
            cout << "Введите второе число: ";
            cin >> why;
            cout << "Наибольшее: " << quest2(who, why);
            break;
        }
        case 3: {
            cout << "\n\n===== ЗАДААНИЕ 3 =====\n\n";
            int n, k;
            cout << "Введите ширину: ";
            cin >> k;
            cout << "Введите высоту: ";
            cin >> n;
            quest3(k, n);
            break;
        }
        case 4: {
            long long n;
            cout << "\n\n===== ЗАДААНИЕ 4 =====\n\n";
            cout << "Введите число для получения факториала: ";
            cin >> n;
            cout << "Факториал числа " << n << ": " << quest4(n);
            break;
        }
        case 5:
            cout << "\n\n===== ЗАДААНИЕ 5 =====\n\n";
            cout << "Введите число чтобы узнать простое оно или нет: ";
            cin >> who;
            quest5(who);
            break;
        case 6: {
            int arr[size];
            cout << "\n\n===== ЗАДААНИЕ 6 =====\n\n";
            cout << "Изначальный массив: ";
            for (int i = 0; i < size; i++) {
                arr[i] = 1 + rand() % 100;
                cout << arr[i] << " ";
            }
            quest6(arr, size);
            break;
        }
        case 7: {
            int arr[size];
            cout << "\n\n===== ЗАДААНИЕ 7 =====\n\n";
            cout << "Изначальный массив: ";
            for (int i = 0; i < size; i++) {
                arr[i] = 1 + rand() % 100;
                cout << arr[i] << " ";
            }
            quest7(arr, size);
            cout << "\nОбратный массив: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            break;
        }
        case 8: {
            int who;
            cout << "\n\n===== ЗАДААНИЕ 8 =====\n\n";
            cout << "Введите число: ";
            cin >> who;
            cout << "\nЕсли вывод 1 то +, иначе - (0 тоже +)\n";
            cout << "Ваше число: " << quest8(who);
            break;
        }
        case 9: {
            int arr[size];
            cout << "\n\n===== ЗАДААНИЕ 9 =====\n\n";
            cout << "Изначальный массив: ";
            for (int i = 0; i < size; i++) {
                arr[i] = 1 + rand() % 100;
                cout << arr[i] << " ";
            }
            cout<<"\nКол-во простых чисел: "<<quest9(arr, size);
            break;
        }
        case 0:
            cout << "\n\nЧАО!!!\n\n";
            return 0;
            break;
        default:
            cout << "\nОШИБКА!!!\n";
            break;
        }
    }
}

int quest1(int num) {
    return num * num * num;
}

int quest2(int who, int why) {

    return (who >= why ? who : why);
}

int quest3(int n, int k) {
    cout << "\n=== ПРЯМОУГОЛЬНИК === \n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (i == 0 || j == 0 || j == k - 1 || i == n - 1) {
                cout << "*";
            }
            else { cout << " "; }
        }
        cout << "\n";
    }
    return 0;
}

long long quest4(long long who) {
    long long fact = 1;
    for (int i = 1; i <= who; i++) {
        fact = fact * i;
    }
    return fact;
}

int quest5(int digit) {
    int del = 0;
    for (int i = 1; i <= digit; i++) {
        if (digit % i == 0) {
            del++;
        }
    }

    cout << digit << (del == 2 ? " - простое число" : " - НЕ простое число");

    return 0;
}

int quest6(const int arr[], const int size) {
    int max = 0, min = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max]) { max = i; }
        else if (arr[i] < arr[min]) { min = i; }
    }
    cout << "\nMAX: " << arr[max] << " (индекс: " << max << ")";
    cout << "\nMIN: " << arr[min] << " (индекс: " << min << ")";
    return 0;
}

int quest7(int arr[], const int size) {
    int n;
    for (int i = 0; i < size / 2; i++) {
        n = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = n;
    }
    return 0;
}

int quest8(int who) {

    return (who>=0 ? 1 : 0);
}

int quest9(int arr[], const int size) {
    int n=0, del=0;
    for (int i = 0; i < size;i++) {
        del = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[i] % j == 0) { del++; }

        }
        if (del == 2) { n++; }
    }

    return n;
}