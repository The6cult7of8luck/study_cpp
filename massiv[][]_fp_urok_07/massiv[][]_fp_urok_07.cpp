#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int test() {
    const int col = 4, row = 4;
    int arr[col][row];

    for (int i = 0; i < col;i++) {
        for (int j = 0; j < row; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " - ";
        }
        cout << "\n";
    }

    for (int i = 0; i < col;i++) {
        int max = arr[i][0];
        for (int j = 0; j < row; j++) {
            if (max < arr[i][j]) { max = arr[i][j]; }

        }
        cout << "\nmax element collumn number " << i + 1 << ": " << max;
    }


    return 0;
}

int quest1() {
    const int col = 3, row = 4;
    int arr[col][row], null = 0;
    cout << "\n\n===== МАССИВ =====\n\n";
    for (int i = 0; i < col;i++) {
        for (int j = 0; j < row; j++) {
            arr[i][j] = rand() % 3;
            if (arr[i][j] == 0) {
                null++;
            }
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n===== ВЫВОД =====\n";
    cout << "Кол-во элементов равных 0: " << null;
    return 0;
}

int quest3() {
    const int size = 11;
    int arr[size][size], n=0, max;
    cout << "\n\n===== МАССИВ =====\n\n";
    for (int i = 0; i < size;i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 10+rand() % 90;
            cout << arr[i][j] << "  ";
        }
        cout << "\n";
    }

    cout << "\n======= ВЫВОД =======";

    cout << "\n\n=== ФИГУРА 1 ===\n\n";
    for (int i = 0; i < size;i++) {
        for (int j = 0; j < size; j++) {
            if (j >= i) { 
                cout << arr[i][j];
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else { cout << "  "; }
        }
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 2 ===\n\n";
    for (int i = 0; i < size;i++) {
        for (int j = 0; j < size; j++) {
            if (j <= i) { 
                cout << arr[i][j]; 
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j]>max){ max = arr[i][j]; }
            
            }
            else { cout << "  "; }
        }
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 3 ===\n\n";
    int col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if (!(j >= i && j <= col)) {
                cout << "  ";
            }
            else { 
                cout << arr[i][j];
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 4 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if (!(j <= i && j >= col)) {
                cout << "  ";
            }
            else { 
                cout << arr[i][j];
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 5 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if ((j <= i && j >= col) || (j >= i && j <= col)) {
                cout << arr[i][j];
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else {
                cout << "  ";
            }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 6 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if ((j <= i && j >= col) || (j >= i && j <= col)) {
                cout << "  ";
            }
            else {
                cout << arr[i][j];
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

   
    n = 0;
    cout << "\n\n=== ФИГУРА 7 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if ((j <= i)&&(j<=col)) { 
                cout << arr[i][j]; 
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else { cout << "  "; }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 8 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if ((row <= i) && !(j < i)) { 
                cout << arr[i][j]; 
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else { cout << "  "; }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 9 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if (!(row < i)) { 
                cout << arr[i][j]; 
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else { cout << "  "; }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: " << max;

    n = 0;
    cout << "\n\n=== ФИГУРА 10 ===\n\n";
    col = size - 1;
    for (int i = 0; i < size;i++) {
        int row = size - 1;
        for (int j = 0; j < size; j++) {
            if ((row <= i)) { 
                cout << arr[i][j]; 
                if (n == 0) { max = arr[i][j]; n = 1; }
                else if (arr[i][j] > max) { max = arr[i][j]; }
            }
            else { cout << "  "; }
            row--;
        }
        col--;
        cout << "\n";
    }
    cout << "\nМаксимальное число: "<<max;

    return 0;
}

int main() {
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    cout << "\n\n===== ЗАДАНИЕ 1 =====";
    quest1();
    cout << "\n\n===== ЗАДАНИЕ 3 и 2 =====";
    quest3();

    return 0;
}
