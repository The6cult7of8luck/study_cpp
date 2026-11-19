#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

int quest1() {
    const int size = 10;
    int arr[size], sum = 0, qua = 0, max = 0;
    for (int i = 0; i < size; i++) {
        arr[i] = -50 + rand() % 100;
        cout << "индекс: " << i << " Элемент: " << arr[i] << "\n";
        if (arr[i] > 0) { sum = sum + arr[i]; }
        else if (arr[i] < 0) { qua++; }
        if (arr[max] < arr[i]) { max = i; }
    }
    cout << "\n\nСумма положительных: " << sum;
    cout << "\nКол-во отрицательных: " << qua;
    cout << "\nМаксимальный элемент: " << arr[max] << " (индекс - " << max << ")";
    return 0;
}
int quest2() {
    const int size = 10;
    int arr[size], arr1[size], k, el;

    for (int i = 0; i < size; i++) {
        arr[i] = -50 + rand() % 100;
        cout << "индекс: " << i << " Элемент: " << arr[i] << "\n";
    }

    cout << "\neieaiv: ";
    cin >> k;
    k = k % size;
    for (int i = 0; i < size; i++) {
        arr1[(i + k) % size] = arr[i];
    }

    for (int i = 0; i < size;i++) {
        cout << "\nиндекс: " << i << " Элемент: " << arr1[i];
    }
    return 0;
}
int quest3() {
    const int size = 10, size2 = 9;
    int arr[size][size2], sum = 0, qua = 0, max = 0, row;
    for (int j = 0; j < size; j++) {
        for (int i = 0; i < size2; i++) {
            arr[j][i] = rand() % 10;
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }

    for (int j = 0; j < size; j++) {
        sum = 0;
        for (int i = 0; i < size2; i++) {
            sum = sum + arr[j][i];
            if (arr[j][i] == 0) { qua++; }
        }
        cout << "\nrow: " << j << " sum: " << sum;
        if (j == 0) { max = sum; row = 0; }
        else if (sum > max) { max = sum; row = j; }
    }
    cout << "\nМаксимальная сумма: " << max << " индекс строки: " << row;
    cout << "\nКол-во нулей: " << qua;
    return 0;
}
int quest4() {
    const int size = 9;
    int arr[size][size], c = size;;
    for (int j = 0; j < size; j++) {
        for (int i = 0; i < size; i++) {
            arr[j][i] = -5 + rand() % 10;
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "\n\n=====================\n\n";
    for (int j = 0; j < size; j++) {
        c--;
        for (int i = 0; i < size; i++) {
            if (i == j) { arr[j][i] = arr[j][i] * 2; }
            if (c == i) { arr[j][i] = arr[j][i] + 10; }
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    cout << "\n\n===== ЗАДАНИЕ 1 =====\n\n";
    quest1();
    cout << "\n\n===== ЗАДАНИЕ 2 =====\n\n";
    quest2();
    cout << "\n\n===== ЗАДАНИЕ 3 =====\n\n";
    quest3();
    cout << "\n\n===== ЗАДАНИЕ 4 =====\n\n";
    quest4();
    return 0;
}