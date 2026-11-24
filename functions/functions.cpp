#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int quest1(int num, int sys);
int quest2(int who);
int quest3(int n, int k);
int quest4(int who);
int quest5(int digit);
int quest6(const int arr[], const int size);
int quest7(int arr[], const int size);

int main(){
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    int who;
    int number;
    int const size = 10;
    while (true){
        cout << "\n\n=============== MENU =================\n";
        cout << "\n1. Задание 1: система счисления";
        cout << "\n2. Задание 2: кубики";
        cout << "\n3. Задание 3: прямоугольник N*K";
        cout << "\n4. Задание 4: факториал";
        cout << "\n5. Задание 5: простое число";
        cout << "\n6. Задание 6: min и max в массиве";
        cout << "\n7. Задание 7: инверсия массива";
        cout << "\n0. Выход";
        cout << "\nВведите номер действия: ";
        cin >> number;
        cout << "\n=============== MENU =================";
        switch (number)
        {
        case 1: {
            cout << "\n\n===== ЗАДААНИЕ 1 =====\n\n";
            int num, sys;
            cout << "Введите число: ";
            cin >> num;
            cout << "Введите систему счисления: ";
            cin >> sys;
            if (num == 0) { cout << "output: 0"; break; }
            if (sys <= 0 || num<0) { cout << "ОШИБКА!!!"; break; }
            quest1(num, sys);
            break;
        }
        case 2: {
            cout << "\n\n===== ЗАДААНИЕ 2 =====\n\n";
            cout << "Введите 0 - если ВАШ ход первый, иначе - 1: ";
            cin >> who;
            who = who % 2;
            quest2(who);
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
        case 4:
            cout << "\n\n===== ЗАДААНИЕ 4 =====\n\n";
            cout << "Введите число для получения факториала: ";
            cin >> who;
            cout<<"Факториал числа "<<who<< ": " << quest4(who);
            break;
        case 5:
            cout << "\n\n===== ЗАДААНИЕ 5 =====\n\n";
            cout << "Введите число чтобы узнать простое оно или нет: ";
            cin >> who;
            quest5(who);
            break;
        case 6: {
            int arr[size];
            cout << "\n\n===== ЗАДААНИЕ 6 =====\n\n";
            cout <<"Изначальный массив: ";
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

int quest1(int num, int sys) {
    int del = num, ost[100], i=100;

    while (del != 0) {
        i--;
        ost[i] = del % sys;
        del = del / sys;
        
    }
    cout << "output: ";
    for (int j = i; j < 100; j++) {  //   65-90
        if (ost[j] >=10) {
            cout << char(ost[j]+55);
        }
        else { cout << ost[j]; }
    }
    return 0;
}

int quest2(int who) {
    int sumPC = 0, sumUSER = 0, ran; 
    for (int i = 1; i <= 10; i++) {
        ran=1 + rand() % 6;

        if (i % 2 == 0) {
            if (who == 1) {
                cout << "\n\n====ВАШ ХОД====\n\n";
                sumUSER = sumUSER + ran;
            }
            else {
                cout << "\n\n==== ХОД PC ====\n\n";
                sumPC = sumPC + ran;
            }
        }
        else {
            if (who == 0) {
                cout << "\n\n====ВАШ ХОД====\n\n";
                sumUSER = sumUSER + ran;
            }
            else {
                cout << "\n\n==== ХОД PC ====\n\n";
                sumPC = sumPC + ran;
            }
        }

        cout << ran<<"\n";
        switch (ran){
        case 1:
            cout << "\n     ";
            cout << "\n  *  ";
            cout << "\n     ";
            break;
        case 2:
            cout << "\n    *";
            cout << "\n     ";
            cout << "\n*    ";
            break;
        case 3:
            cout << "\n    *";
            cout << "\n  *  ";
            cout << "\n*    ";
            break;
        case 4:
            cout << "\n*   *";
            cout << "\n     ";
            cout << "\n*   *";
            break;
        case 5:
            cout << "\n*   *";
            cout << "\n  *  ";
            cout << "\n*   *";
            break;
        case 6:
            cout << "\n*   *";
            cout << "\n*   *";
            cout << "\n*   *";
            break;
        default:
            break;
        }

    }
    cout << "\n\n==== ИТОГИ ====\n\n";
    cout << "Кол-во очков у PC: "<<sumPC;
    cout << "\nКол-во очков у ВАС: " << sumUSER;
    cout << "\nПобедитель: "<<(sumUSER>sumPC ? "USER" : (sumPC>sumUSER ? "PC" : "НИЧЬЯ"));
    return 0;
}

int quest3(int n, int k) {
    cout << "\n=== ПРЯМОУГОЛЬНИК === \n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (i == 0 || j == 0 || j == k-1 || i == n-1) {
                cout << "*";
            }
            else { cout << " "; }
        }
        cout << "\n";
    }
    return 0;
}

int quest4(int who) {
    int fact=1;
    for (int i = 1; i <= who; i++) {
        fact = fact * i;
    }
    return fact;
}

int quest5(int digit) {
    int del=0;
    for (int i = 1; i <= digit; i++) {
        if (digit % i == 0) {
            del++;
        }
    }

    cout <<digit<< (del == 2 ? " - простое число" : " - НЕ простое число");

    return 0;
}

int quest6(const int arr[], const int size ) { 
    int max = 0, min = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max]) { max = i; }
        else if (arr[i] < arr[min]) { min = i;}
    }
    cout << "\nMAX: "<<arr[max]<<" (индекс: "<<max<<")";
    cout << "\nMIN: "<<arr[min]<<" (индекс: "<<min<<")";
    return 0;
}

int quest7(int arr[], const int size) {
    int n;
    for (int i = 0; i < size/2; i++) {
        n = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = n;
    }
    return 0;
}

