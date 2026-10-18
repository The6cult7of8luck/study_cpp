#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int quest1() {
    int point, a;
    bool end = 0;
    cout << "Программа загадала число, вам нужно его отгадать.\nВот список действий что вам доступен: ";
    while (true) {
        cout << "\n1. Делиться это число на то, что вы введёте\n2. Это число меньше чем ваше\n3. это число больше чем ваше";
        cout << "\n4. Программа загадала число: ...\nВведите номер пункта что вы выбрали: ";
        cin >> point;
        cout << "Введите ваше число: ";
        cin >> a;
        switch (point) {
        case 1: // /
            if (42 % a == 0) {
                cout << "Да, делится";
            }
            else {
                cout << "нет, остаток имеется";
            }
            break;
        case 2: // >
            if (42 < a) {
                cout << "Да, " << a << " больше загаданного числа";
            }
            else {
                cout << "Нет, не тут та было";
            }
            break;
        case 3: // <
            if (42 > a) {
                cout << "Да, " << a << " меньше загаданного числа";
            }
            else {
                cout << "Ничего подобного";
            }
            break;
        case 4: // ==
            if (42 == a) {
                cout << "Да, всё верно!" << "\nВы победили!!!";
                end = 1;
            }
            else {
                cout << "Нет, вы ошиблись";
            }
            break;
        default:
            cout << "Такого пункта нет";
            break;

        }
        if (end == 1) {
            break;
        }
    }
    
    return 0;
}

int quest2() {
    // max из 3,  sum(|x|), a==b==c
    int a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    (a>b && a>c) ? cout << a <<" Большее из этих чисел\n" : 
    (b > a && b > c) ? cout << b << " Большее из этих чисел\n" :
    (c > a && c > b) ? cout << c << " Большее из этих чисел\n" : cout << "Ну видать одинаковые\n";

    (a < 0) ? a = 0 : a = a;
    (b < 0) ? b = 0 : b = b;
    (c < 0) ? c = 0 : c = c;
    cout <<"Сумма положительных чисел: "<<a+b+c<<"\n";

    (a == b && a== c) ? cout << "1, стороны равностороннего треугольника\n" : cout << "0, нет не равносторонний\n";


    return 0;
}

int quest3() {
    short a;
    bool r, w, n, d;
    cout << "Введите уровень доступа 1-15: ";
    cin >> a;
    if (a < 1 || a>15) {
        cout << "Уровень прав вне диапазона";
        return 0;
    }
    (a==1 || a ==3 || a ==5 || a==7 || a == 9 || a ==11 || a == 13 || a == 15) ? n=1 : n=0 ;
    (a == 2 || a == 3 || a == 6 || a == 7 || a == 10 || a == 11 || a == 14 || a == 15) ? w = 1 : w = 0;
    (a == 4 || a == 5 || a == 6 || a == 7 || a == 12 || a == 13 || a == 14 || a == 15) ? r = 1 : r = 0;
    (a == 8 || a == 9 || a == 10 || a == 12 || a == 11 || a == 13 || a == 14 || a == 15) ? d = 1 : d = 0;
    cout << "\nЧтение: "<<r;
    cout << "\nЗапись: "<<w;
    cout << "\nИсполнение: "<<n;
    cout << "\nУдаление: "<<d;


    
    return 0;
}

int quest4() {
    char x_a;
    int y, x;
    cout << "Введите положение по коардинате x: ";
    cin >> x_a;
    switch (x_a) {
    case 'A':
    case 'a':
        x = 1;
        break;
    case 'B':
    case 'b':
        x = 2;
        break;
    case 'C':
    case 'c':
        x = 3;
        break;
    case 'D':
    case 'd':
        x = 4;
        break;
    case 'E':
    case 'e':
        x = 5;
        break;
    case 'F':
    case 'f':
        x = 6;
        break;
    case 'G':
    case 'g':
        x = 7;
        break;
    case 'H':
    case 'h':
        x = 8;
        break;
    default:
        cout << "Там всего 8 букв";
        return 0;
        break;
    }
    cout << "Введите положение по коардинате y: ";
    cin >> y;
    if (y<1 || y>8) {
        cout << "\nпо коардинате y выходит за пределы доски";
        return 0;
    }
    else if ((x + y) % 2 == 0) {
        cout << "\nДанная клетка чёрного цвета";
    }
    else {
        cout << "\nДанная клетка белого цвета";
    }
    if ((x == 1 || x == 8) &&( y == 1 || y == 8)) {
        cout << "\nЭто угловая клетка";

    }
    else if (((x == 1 || x == 8) && (y<8 && y>1)) || ((y == 1 || y == 8) && (x < 8 && x>1))) {
        cout << "\nЭто боковая клетка";
    }
    else {
        cout << "\nЭто центральная клетка";
    }
    return 0;
}

int quest5() {
    string password;
    bool len, digit=0, up_reg=0, bot_reg=0;
    cout << "Введите ваш пароль: ";
    cin >> password;
    if (password.length() > 7 && password.length() <= 12) {
        len = 1;
    }
    else {
        len = 0;
    }
    for (int i = 0; i < password.length(); i++) {
        if (digit == 0 && !(password[i]<'0' || password[i]>'9')) {
            digit = 1;
        }
        else if (up_reg== 0 && (password[i] <= 'z' && password[i]>='a')) {
            up_reg = 1;
        }
        else if (bot_reg == 0 && (password[i] <= 'Z' && password[i]>='A')) {
            bot_reg = 1;
        }
           
    }
    cout << "\nОтчёт по поролю: ";
    cout << "\nДлинна от 8 до 12: " << len;
    cout << "\nНаличие цифры: "<< digit;
    cout << "\nНаличие заглавной буквы: " << up_reg;
    cout << "\nНаличие строчной буквы: " << bot_reg<<"\n";
    if (len * digit * up_reg * bot_reg == 1) {
        cout <<password<<" - валидный пароль :)";
    }
    else {
        cout << password<<" - невалидный пароль :(";
    }
    
    return 0;
}

int quest6() {
    double x, y, x0, y0, r, theta;
    int type, n=0;
    cout << "Введите координаты точки x: ";
    cin >> x;
    cout << "Введите координаты точки y: ";
    cin >> y;

    cout << "Введите тип фигуры (1 - треугольник, 2 - квадрат, 3 - пятиугольник): ";
    cin >> type;

    cout << "Введите центр x0: ";
    cin >> x0;
    cout << "Введите центр y0: ";
    cin >> y0;
    cout << "Введите радиус опис. окружности: ";
    cin >> r;

    switch (type) {
    case 1:
        n = 3;
        break;
    case 2:
        n = 4;
        break;
    case 3:
        n = 5;
        break;
    default:
        cout << "Такого выбора нет, n=3";
        n = 0;
        break;
        
    }

    x = x - x0; //dx
    y = y - y0; //dy

    x0 = sqrt(x*x+y*y); // dist

    theta = atan2(y, x); // angel
    
    y0 = 2 * 3.14 / n; // sector

    theta = fmod(theta + y0 / 2, y0);
    if (theta < 0) {
        theta += y0;
    }
    theta -= y0 / 2;
    
    // theta = r_max
    theta = (r * cos(3.14 / n)) / cos(theta);
    if (x0 <= theta) {
        cout << "Точка находиться внутри фигуры";
    }
    else {
        cout << "Точка находиться вне фигуры";
    }
    return 0;
}

int quest7() {
    string date;
    int a0, a1, day, dayn=0,a3, a4, moth, a6, a7, a8, a9, year;
    bool year4;
    cout << "Введите дату в формате xx.xx.xxxx: ";
    cin >> date;
    // разбиение на день, месяц, год.
    a0 = date[0] - '0';
    a1 = date[1] - '0';
    day = a0*10+a1;
    a3 = date[3] - '0';
    a4 = date[4] - '0';
    moth = a3*10+a4;
    a6 = date[6] - '0';
    a7 = date[7] - '0';
    a8 = date[8] - '0';
    a9 = date[9] - '0';
    year = a6 * 1000 + a7 * 100 + a8 * 10 + a9;

    // проверка на високостность года
    if (year % 4 != 0) {
        year4 = 0;
    }
    else if (year%100!=0){
        year4 = 1;
    }
    else if (year%400==0) {
        year4 = 1;
    }
    else {
        year4 = 0;
    }
    
    switch (moth)
    {
    case 1:
        cout << "В этом месяце 31 день";
        dayn = 0;
        break;
    case 2:
        if (year4 == 0) {
            cout << "В этом месяце 28 дней";
            dayn = 31;
        }
        else {
            cout << "В этом месяце 29 дней";
            dayn = 31;
        }
        break;
    case 3:
        cout << "В этом месяце 31 день";
        (year4==0) ? dayn = 59 : dayn=60;
        break;
    case 4:
        cout << "В этом месяце 30 день";
        (year4 == 0) ? dayn = 90 : dayn = 91;
        break;
    case 5:
        cout << "В этом месяце 31 день";
        (year4 == 0) ? dayn = 120 : dayn = 121;
        break;
    case 6:
        cout << "В этом месяце 30 день";
        (year4 == 0) ? dayn = 151 : dayn = 152;
        break;
    case 7:
        cout << "В этом месяце 31 день";
        (year4 == 0) ? dayn = 181 : dayn = 182;
        break;
    case 8:
        cout << "В этом месяце 31 день";
        (year4 == 0) ? dayn = 212 : dayn = 213;
        break;
    case 9:
        cout << "В этом месяце 30 день";
        (year4 == 0) ? dayn = 243 : dayn = 244;
        break;
    case 10:
        cout << "В этом месяце 31 день";
        (year4 == 0) ? dayn = 273 : dayn = 274;
        break;
    case 11:
        cout << "В этом месяце 30 день";
        (year4 == 0) ? dayn = 304 : dayn = 305;
        break;
    case 12:
        cout << "В этом месяце 31 день";
        (year4 == 0) ? dayn = 334 : dayn = 335;
        break;
    default:
        break;
    }
    cout <<"\nНомер дня в году: "<<dayn+day;

    if (a9==a0 && a8==a1 && a7==a3 && a6==a4 ) {
        cout << "\nДа, это дата полиндром в формате xxxx.xx.xx";
    }
    else {
        cout << "\nнет, это дата не полиндром";
    }
    return 0;

}

int quest8() {
    float k1, k2, b1, b2;
    cout << "Введите k1: ";
    cin >> k1;
    cout << "Введите b1: ";
    cin >> b1;
    cout << "Введите k2: ";
    cin >> k2;
    cout << "Введите b2: ";
    cin >> b2;

    if ((abs(k1 - k2) < 1e-9) && (abs(b1 - b2) < 1e-9)) {
        cout << "прямые совпадают";
    }
    else if ((abs(k1 - k2) < 1e-9) && !(abs(b1 - b2) < 1e-9)) {
        cout << "Прямые параллельны";
    }
    else {
        if (abs(k1 * k2 + 1.0) < 1e-9) {
            cout << "Прямые перпендикулярны";
        }
        else {
            cout << "Прямые пересекаются";
            
        }
        k2 = (b2 - b1) / (k1 - k2);
        k1 = k1 * k2 + b1;
        cout << "\nТочка пересечения: (" << k2 << ";" << k1 << ")";
    }

    return 0;
}




int main(){
    setlocale(LC_ALL,"Ru");
    bool end = 0;
    int func;

    while (true) {
        cout << "\n\nСписок доступных действий: ";
        cout << "\n1. Задание 1";
        cout << "\n2. Задание 2";
        cout << "\n3. Задание 3";
        cout << "\n4. Задание 4";
        cout << "\n5. Задание 5";
        cout << "\n6. Задание 6";
        cout << "\n7. Задание 7";
        cout << "\n8. Задание 8";
        cout << "\n9. Задание 9 (пока нет)";
        cout << "\n10. Задание 10 (пока нет)";
        cout << "\n11. Задание 11 (пока нет)";
        cout << "\n12. Задание 12 (пока нет)";
        cout << "\n0. Прекратить";
        cout << "\nВведите номер действия: ";
        cin >> func;
        switch (func)
        {
        case 1:
            cout << "Задание 1:\n\"Идентификация магического числа\"\n\n";
            quest1();
            break;
        case 2:
            cout << "Задание 2:\n\"Тернарный калькулятор флагов\"\n\n";
            quest2();
            break;
        case 3:
            cout << "Задание 3:\n\"Битовая маска прав доступа\"\n\n";
            quest3();
            break;
        case 4:
            cout << "Задание 4:\n\"Определение типа шахматной клетки\"\n\n";
            quest4();
            break;
        case 5:
            cout << "Задание 5:\n\"Валидатор сложного пароля\"\n\n";
            quest5();
            break;
        case 6:
            cout << "Задание 6:\n\"Принадлежность точки N-угольнику (N=3, 4, 5)\"\n\n";
            quest6();
            break;
        case 7:
            cout << "Задание 7:\n\"Анализатор даты без календаря\"\n\n";
            quest7();
            break;
        case 8:
            cout << "Задание 8:\n\"Классификатор взаимного расположения прямых\"\n\n";
            quest8();
            break;
        case 9:
            cout << "Задание 9:\n\"Тернарный FizzBuzz (одна строка вывода)\"\n\n";
            //quest9();
            break;
        case 10:
            cout << "Задание 10:\n\"Оптимизатор тарифа связи\"\n\n";
            //quest10();
            break;
        case 11:
            cout << "Задание 11:\n\"Детектор логических парадоксов\"\n\n";
            //quest11();
            break;
        case 12:
            cout << "Задание 12:\n\"Конструктор булевой функции\"\n\n";
            //quest12();
            break;
        case 0:
            cout << "Досвидание!";
            end = 1;
            break;
        default:
            cout << "Такого пункта нет, попробуйте снова.";
            break;
        }
        // условие выхода из цикла
        if (end == true) {
            break;
        }
    }
    return 0;
}


