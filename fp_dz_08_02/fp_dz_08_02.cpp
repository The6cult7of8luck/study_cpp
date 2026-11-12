#include <iostream>
#include <string>
#include <stdlib.h> //rand
#include <time.h> // time
using namespace std;

// конструкция рандома srand(time(NULL))


/*
srand(time(NULL));
int a;
a=rand();
*/

int quest1() {
    srand(time(NULL));
    const int size = 100;
    int arr[size], max, min;
    for (int i = 0;i < size;i++) {
        arr[i] = 1 + rand() % 100;
        cout << "Элемент номер " << i << ": " << arr[i] << "\n";
        if (i == 0) {
            max = arr[i];
            min = arr[i];
        }
        (max < arr[i]) ? max = arr[i] : max = max;
        (min > arr[i]) ? min = arr[i] : min = min;

    }
    cout << "\nМинимальное: " << min;
    cout << "\nМаксимальное: " << max;
    return 0;
}

int quest2() {
    srand(time(NULL));
    const int size = 100;
    int arr[size], sum = 0, digit;
    cout << "Введите положительное число (1-100): ";
    cin >> digit;
    for (int i = 0;i < size;i++) {
        arr[i] = 1 + rand() % 100;
        cout << "Элемент номер " << i << ": " << arr[i] << "\n";
        if (arr[i] < digit) { sum = sum + arr[i]; }

    }
    cout << "\nСумма чисел меньше " << digit << ": " << sum;
    return 0;
}

int quest3() {
    const int size = 12;
    int arr[size], min, max, start, end;
    cout << "\n\n===== ОТЧЁТ ПО ПРИБЫЛИ ЗА ГОД =====\n\n";
    for (int i = 0; i < size; i++) {
        cout << "Введите прибыль за " << i + 1 << " месяц: ";
        cin >> arr[i];

    }
    cout << "\n\n===== ПОИСК МИНИМУМА И МАКСИМУМА ПРИБЫЛИ =====\n\n";
    cout << "\nВведите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;
    max = start-1;
    min = start-1;
    for (int i = start-1; i < end;i++) {

        (arr[max] < arr[i]) ? max = i : max = max;
        (arr[min] > arr[i]) ? min = i : min = min;
    }
    cout << "\n\n===== МАКСИМУМ И МИНИМУМ =====\n";
    cout << "\nМаксимальная прибыль: " << arr[max] << " (" << max+1 << " месяц)";
    cout << "\nМинимальная прибыль: "<<arr[min]<<" ("<<min+1<<" месяц)";
    return 0;
}

int quest4() {
    srand(time(NULL));
    const int size = 50;
    double arr[size], neg_sum=0, sum=0, mmulm=1, multy=1;
    int max = 0, min = 0, start = -1, end = 0;
    for (int i = 0;i < size;i++) {
        arr[i] = (-2000 + rand() % 10000) / 1000.0;
        cout << "Элемент номер " << i << ": " << arr[i] << "\n";
        //позитиции min and max
        (arr[max] < arr[i]) ? max = i : max = max;
        (arr[min] > arr[i]) ? min = i : min = min;
        //позиции первого и последнего отрицательного
        if (arr[i] < 0 && start == -1) {
            start = i;
        }
        if (arr[i] < 0) { 
            end = i; 
            sum = sum + arr[i]; // сумма отрицательных
        }
        if (i % 2 == 0) { multy = multy * arr[i]; } // произведение чётных индексов
    }
    for (int i = start;i <= end;i++) { // сумма от первого до последнего отрицательного
        neg_sum = neg_sum + arr[i];
    }
    // произведение элементов в диапазоне между мин и макс 
    if (max > min) { 
        for (int i = min; i <= max;i++) {
            mmulm = mmulm * arr[i];
        }
    }
    else if (min>max){
        for (int i = max; i <= min;i++) {
            mmulm = mmulm * arr[i];
        }
    }

    cout << "\n\n===== ОТЧЁТ =====\n\n";
    cout << "Сумма отрицательных: "<<sum;
    cout << "\nСумма между отрицательными: " << neg_sum;
    cout << "\nПроизведение чётных индексов: "<<multy;
    cout << "\nПроизедение между min и max: "<<mmulm;

    cout << "\n\n===== ЗНАЧЕНИЯ ПЕРЕМЕННЫХ =====";
    cout << "\nМин: "<<min;
    cout << "\nмакс: " << max;
    cout << "\nстарт: " <<start;
    cout << "\nконец: " <<end ;

    return 0;
}

int main() {
    setlocale(LC_ALL, "Ru");
    cout << "\n\n======== ЗАДАНИЕ 1 ========\n\n";
    quest1();
    cout << "\n\n======== ЗАДАНИЕ 2 ========\n\n";
    quest2();
    cout << "\n\n======== ЗАДАНИЕ 3 ========\n\n";
    quest3();
    cout << "\n\n======== ЗАДАНИЕ 4 ========\n\n";
    quest4();
    return 0;
}
