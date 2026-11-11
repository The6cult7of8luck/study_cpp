#include <iostream>
#include <string>


using namespace std;

int now_year() {
    // функция получения текущего года (сейчас не доступно)
    int year=2026;
    return year; 
}

int quest1() {
    string name;
    int age;
    float height;
    char f_s_n;
    bool grade;

    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш возраст: ";
    cin >> age;
    cout << "Введите ваш рост в метрах: ";
    cin >> height;
    cout << "Введите первую букву имени: ";
    cin >> f_s_n;
    cout << "Введите если вы отличник - 1, иначе - 0: ";
    cin >> grade;


    cout << "\n========== ОТЧЁТ ==========\n\n";
    cout << "Имя: "<<name<<"\n";
    cout << "Возраст: "<< age << "\n";
    cout << "Год рождения: " << now_year()-age << "\n";
    cout << "Рост: " << height <<" м  ("<<height*100<<" см)\n";
    cout << "Первая буква имени: " << f_s_n << "\n";
    (grade) ? cout << "Отличник: Да\n" :cout << "Отличник: Нет\n";
    cout << "\nРазмер STRING: "<<sizeof(string) << "\n";
    cout << "Размер INT: " << sizeof(int) << "\n";
    cout << "Размер FLOAT: " << sizeof(float) << "\n";
    cout << "Размер DOUBLE: " << sizeof(double) << "\n";
    cout << "Размер CHAR: " << sizeof(char) << "\n";
    cout << "Размер BOOL: " << sizeof(bool) << "\n";
    cout << "\n========== КОНЕЦ ==========\n";
    return 0;
}

int quest2() {
    int mark;
    cout << "Введите ваш балл (0-100): ";
    cin >> mark;
    if (mark < 0 || mark>100) { cout << "\nERROR: Ошибка. Недопустимое значение."; }
    else if (mark >= 90) { cout << "\nОтлично!\nВаша оценка: 5"; cout << "\n\nЗачёт получен"; }
    else if (mark >= 75) { cout << "\nХорошо!\nВаша оценка : 4"; cout << "\n\nЗачёт получен"; }
    else if (mark >= 60) { cout << "\nУдовлетворительно.\nВаша оценка: 3"; cout << "\n\nЗачёт получен"; }
    else if (mark >= 0) { cout << "\nНеудовлетворительно.\nВаша оценка: 2"; cout << "\n\nЗачёт не получен"; }
    return 0;
}

int quest3() {
    double money;
    int choice;
    cout << "Введите сумму для перевода: ";
    cin >> money;
    
    cout << "\n===== ВАЛЮТЫ И КУРС =====\n";
    cout << "1 - USD = 92.5\n";
    cout << "2 - EUR = 100.3\n";
    cout << "3 - CNY = 12.8\n";
    cout << "4 - KZT = 0.20";
    cout << "\n=========================\n";
    cout << "Введите номер валюты: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\nОООО популярная валюта!";
        cout << "\nВывод: " << (double(int((money / 92.5)*100)))/100;
        break;
    case 2:
        cout << "\nОООО популярная валюта!";
        cout << "\nВывод: " << (double(int((money / 100.3) * 100))) / 100;;
        break;
    case 3:
        cout << "\nВывод: " << (double(int((money / 12.8) * 100))) / 100;;
        break;
    case 4:
        cout << "\nВывод: " << (double(int((money / 0.20) * 100))) / 100;;
        break;
    default:
        cout << "\nERROR: Недопустимое значение";
        break;
    }
    return 0;
}

int quest4() {
    int n, sum=0;
    cout << "Введите положительное число: ";
    cin >> n;
    for (int i = 1;i <= n;i++) {
        sum = sum + i;
    }
    cout << "\nСумма 1..." << n << " = "<<sum;
    long long fact=1, j=1;
    while (j <= n) {
        fact = fact * j;
        j++;
    }
    cout << "\nФакториал числа: " << n << " = "<<fact;

    int i = 1;
    cout << "\nЧётные: ";
    do {
        if (i%2==0){ cout << i << " "; }
        i++;
    } while (i<=n);

    int s = 0;
    for (int i = 1; i <= n;i++) {
        if (n % i == 0) { s++; }
    }
    if (s == 2) {
        cout << "\nЧисло: " <<n<< " - простое";
    }
    else { cout << "\nЧисло: " << n << " - не является простым"; }
    return 0;
}

int quest5() {
    int n;
    cout << "Введите число (5-99): ";
    cin >> n;

    cout << "\n\n===== ТРЕУГОЛЬНИК =====\n\n";
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            if (i<=j) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    int n1 = n, n2 = n;
    cout << "\n\n===== РОМБ =====\n\n";
    for (int j = 0; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            if (i >= ((n / 2) + 1) - j && i <= ((n / 2) + 1) + j && i <= ((n / 2) + 1) + n1 && i >= ((n / 2) + 1) - n1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
        n1--;
    }

    cout << "\n\n===== ТАБЛИЦА УМНОЖЕНИЯ =====\n\n ";

    for (int i = 1; i <= n;i++) {
        cout <<"  "<<i;
    }
    cout << "\n";
    for (int j = 1; j <= n; j++) {
        cout <<j<<"  ";
        for (int i = 1; i <= n; i++) {
            cout << i * j << "  ";
            

        }
        cout << "\n";
    }

    cout << "\n\n===== ШАХМАТНАЯ ДОСКА =====\n\n";
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            if (j%2==0) {
                if (i%2==0)
                cout << ".";
                else { cout << "#"; }
            }
            else {
                if (i % 2 == 0)
                    cout << "#";
                else { cout << "."; }
            }
        }
        cout << "\n";
    }

    return 0;
}

int quest6() {
    int choice, snyt, popoln;
    double balans = 10000;
    while (1) {
        cout << "\n\n===== MENU =====\n";
        cout << "1. Проверить баланс\n";
        cout << "2. Снять наличные\n";
        cout << "3. Пополнить счёт\n";
        cout << "4. Выход\n";
        cout << "================\n";
        cout << "Введите номер действия: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nВаш баланс: "<<balans;
            break;
        case 2:
            cout << "Введите сумму снятия: ";
            cin >> snyt;
            if (snyt > balans || !(snyt % 100 == 0) || snyt < 0) { cout << "ERROR: Действие невозможно!!!"; }
            else { 
                balans = balans - snyt; 
                cout << "\nВы сняли: " << snyt; 
                cout << "\nВаш баланс: " << balans;
            }
            break;
        case 3:
            cout << "Введите сумму пополнения: ";
            cin >> popoln;
            balans = balans + popoln;
            cout << "\nВаш баланс: " << balans;
            break;
        case 4:
            cout << "\nВаш баланс: " << balans;
            cout << "\nПрощайте!!!";
            return 0;
            break;
        default:
            cout << "\n\nERROR: Невозможное действие!!!";
            break;
        }
    }
    return 0;
}
int main(){
    setlocale(LC_ALL,"RU");
    cout << "\n\n===== ЗАДАНИЕ 1 =====\n\n";
    quest1();
    cout << "\n\n===== ЗАДАНИЕ 2 =====\n\n";
    quest2();
    cout << "\n\n===== ЗАДАНИЕ 3 =====\n\n";
    quest3();
    cout << "\n\n===== ЗАДАНИЕ 4 =====\n\n";
    quest4();
    cout << "\n\n===== ЗАДАНИЕ 5 =====\n\n";
    quest5();
    cout << "\n\n===== ЗАДАНИЕ 6 =====\n\n";
    quest6();
    return 0;
}
