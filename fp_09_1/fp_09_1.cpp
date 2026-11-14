#include <iostream>
#include <time.h>

using namespace std;

int quest1() {
    srand(time(NULL));
    const int size = 100; 
    int arr[size];

    cout << "Массив до: [";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 5; 
        cout << arr[i] << (i == size - 1 ? "]\n" : ", ");
    }


    int not_null = 0;


    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[not_null] = arr[i];
            not_null++;
        }
    }


    for (int i = not_null; i < size; i++) {
        arr[i] = -1;
    }

    cout << "\nМассив после: [";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << (i == size - 1 ? "]\n" : ", ");
    }

    return 0;
}

int quest2() {
    srand(time(NULL));
    int const size1 = 5, size2 = 10;
    int fir[size1], sec[size1], arr[size2], j=0;

    for (int i = 0; i < size1; i++) {
        fir[i] = rand() % 5;
        sec[i] = rand() % 5;
    }

    for (int i = 0; i < size1;i++) {
        if (fir[i] > 0) {
            arr[j] = fir[i];
            j++;
        }
        if (sec[i] > 0) {
            arr[j] = sec[i];
            j++;
        }
    }

    for (int i = 0; i < size1;i++) {
        if (fir[i] == 0) {
            arr[j] = fir[i];
            j++;
        }
        if (sec[i] == 0) {
            arr[j] = sec[i];
            j++;
        }
    }

    for (int i = 0; i < size1;i++) {
        if (fir[i] < 0) {
            arr[j] = fir[i];
            j++;
        }
        if (sec[i] < 0) {
            arr[j] = sec[i];
            j++;
        }
    }
    cout << "\nМассив 1: [";
    for (int i = 0; i < size1; i++) {
        cout << fir[i] << (i == size1 - 1 ? "]\n" : ", ");
    }
    cout << "\nМассив 2: [";
    for (int i = 0; i < size1; i++) {
        cout << sec[i] << (i == size1 - 1 ? "]\n" : ", ");
    }
    cout << "\nМассив 3: [";
    for (int i = 0; i < size2; i++) {
        cout << arr[i] << (i == size2 - 1 ? "]\n" : ", ");
    }
    return 0;
}
int main() {
    setlocale(LC_ALL, "Ru");
    cout << "\n===== ЗАДАНИЕ 1 =====\n\n";
    quest1();
    cout << "\n===== ЗАДАНИЕ 2 =====\n\n";
    quest2();
    return 0;
}