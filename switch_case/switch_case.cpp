#include <iostream>

using namespace std;

int quest1() {
    int day;
    cout << "Введите номер дня недели: ";
    cin >> day;
    switch (day) {
    case 1:
        cout << "Понедельник";
        break;
    case 2:
        cout << "Вторник";
        break;
    case 3:
        cout << "Среда";
        break;
    case 4:
        cout << "Четверг";
        break;
    case 5:
        cout << "Пятница";
        break;
    case 6:
        cout << "Суббота";
        break;
    case 7:
        cout << "Воскресенье";
        break;
    default:
        cout << "Число вне диапазона";
        break;
    }
    return 0;
}
void quest2() {
    double a, b;
    char op;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите знак между ними (+,-,* или /): ";
    cin >> op;
    switch (op) {
    case 43:
        cout << "Ответ: " << a << op << b << "=" << a + b;
        break;
    case 45:
        cout << "Ответ: " << a << op << b << "=" << a - b;
        break;
    case 42:
        cout << "Ответ: " << a << op << b << "=" << a * b;
        break;
    case 47:
        if (b == 0) {
            cout << "На нуль делать нельзя";
        }
        else {
            cout << "Ответ: " << a << op << b << "=" << a / b;
        }
        break;
    default:
        cout << "Такого знака не имеется";
        break;
    }

}
int quest3() {
    enum Season { WINTER, SPRING, SUMMER, AUTUMN };
    int a;
    cout << "Введите время года (зима - 0, весна - 1, лето - 2, осень - 3): ";
    cin >> a;
    Season season;
    switch (a) {
    case WINTER:
        season = WINTER;
        break;
    case SPRING:
        season = SPRING;
        break;
    case SUMMER:
        season = SUMMER;
        break;
    case AUTUMN:
        season = AUTUMN;
        break;
    default:
        cout << "Число вне диапазона";
    }

    switch (season) {
    case WINTER:
        cout << "Зима, средняя температура  -30С";
        break;
    case SPRING:
        cout << "Весна, средняя температура +15С";
        break;
    case SUMMER:
        cout << "Лето, средняя температура +25С";
        break;
    case AUTUMN:
        cout << "Осень, средняя температура +7С";
        break;
    default:
        cout << "rgrgtrh";

    }
    return 0;
}
int quest4() {
    int a;
    cout << "1. Приветствие\n2. Текущее время\n3. Калькулятор\n4. Выход\nВведите номер действия: ";
    cin >> a;
    switch (a) {
    case 1:
        cout << "Привет раб системы";
        break;
    case 2:
        cout << "Без пяти пол тапочка";
        break;
    case 3:
        cout << "Добро пожаловать в калькулятор!\n";
        quest2();
        break;
    case 4:
        cout << "Пока пока";
        break;
    default:
        cout << "Такого варианта действий нету T-T";
        break;
    }
    return 0;
}
int quest5() {
    enum Grade { A, B, C, D, F };
    char a;
    Grade gradeMarks;
    cout << "Введите вашу оценку в американском формате: ";
    cin >> a;
    switch (a) {
    case 'A':
        gradeMarks = A;
        break;
    case 'B':
        gradeMarks = B;
        break;
    case 'C':
        gradeMarks = C;
        break;
    case 'D':
        gradeMarks = D;
        break;
    case 'F':
        gradeMarks = F;
        break;
    default:
        cout << "Неизвестная оценка";
        break;
    }
    switch (gradeMarks) {
    case A:
        cout << "Отлично (5)";
        break;
    case B:
        cout << "Хорошо (4)";
        break;
    case C:
        cout << "Удовлетворительно (3)";
        break;
    case D:
        cout << "Слабо (2)";
        break;
    case F:
        cout << "Неудовлетворительно (1)";
        break;
    default:
        cout << "быбыбы";
        break;
    }
    return 0;
}
int quest6() {
    int a;
    cout << "Введите время в часах: ";
    cin >> a;
    switch (a) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Прочь! Прочь! звёзды любят ночь, наблюдают с высока, как творятся чудеса";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        cout << "Утро";
        break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        cout << "День";
        break;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        cout << "Вечер";
        break;
    default:
        cout << "В сутках 24 часа";
        break;
    }
    return 0;
}
int quest7() {
    enum Direction {UP, DOWN, LEFT, RIGHT};
    char a;
    cout << "Введите направление w (вверх), s (вниз), a (влево), d (вправо): ";
    cin >> a;
    Direction move;
    switch (a) {
    case 'w':
    case 'W':
        move = UP;
        break;
    case 's':
    case 'S':
        move = DOWN;
        break;
    case 'A':
    case 'a':
        move = LEFT;
        break;
    case 'd':
    case 'D':
        move = RIGHT;
        break;
    default:
        cout << "Некоректное направление";
        break;
    }
    switch (move)
    {
    case UP:
        cout << "Ответ: (0, +1)";
        break;
    case DOWN:
        cout << "Ответ: (0, −1)";
        break;
    case LEFT:
        cout << "Ответ: (−1, 0)";
        break;
    case RIGHT:
        cout << "Ответ: (+1, 0)";
        break;
    default:
        break;
    }
    return 0;
}
int quest8() {
    short a;
    cout << "Введите число от 1 до 10: ";
    cin >> a;
    switch (a){
    case 1:
        cout <<a<<" = I";
        break;
    case 2:
        cout << a << " = II";
        break;
    case 3:
        cout << a << " = III";
        break;
    case 4:
        cout << a << " = IV";
        break;
    case 5:
        cout << a << " = V";
        break;
    case 6:
        cout << a << " = VI";
        break;
    case 7:
        cout << a << " = VII";
        break;
    case 8:
        cout << a << " = VIII";
        break;
    case 9:
        cout << a << " = IX";
        break;
    case 10:
        cout << a << " = X";
        break;
    default:
        cout <<a <<" - вне диапазона";
        break;
    }
    return 0;
}
int quest9() {
    enum OrderStatus { NEW, PAID, SHIPPED, DELIVERED, CANCELLED };
    short a;
    cout << "Введите номер статуса заказа (0-4): ";
    cin >> a;
    OrderStatus stat;
    switch (a) {
    case 0:
        stat = NEW;
        break;
    case 1:
        stat = PAID;
        break;
    case 2:
        stat = SHIPPED;
        break;
    case 3:
        stat = DELIVERED;
        break;
    case 4:
        stat = CANCELLED;
        break;
    default:
        cout << "Отсутствующий номер статуса";
        break;
    }

    switch (stat){
    case NEW:
        cout << "Заказ создан. Ожидается оплата.";
        break;
    case PAID:
        cout << "Оплачен. Готовится к отправке.";
        break;
    case SHIPPED:
        cout << "Отправлен. Ожидайте доставку.";
        break;
    case DELIVERED:
        cout << "Доставлен. Спасибо за покупку!";
        break;
    case CANCELLED:
        cout << "Отменён. Обратитесь в поддержку.";
    default:
        cout << "frfr";
        break;
    }
    return 0;
}

int quest10() {
    char a;
    cout << "Введите первую букву цвета светафора (r, y, g): ";
    cin >> a;
    switch (a) {
    case 'r':
    case 'R':
        cout << "Стоп";
        break;
    case 'y':
    case 'Y':
        cout << "Приготовиться";
        break;
    case 'g':
    case 'G':
        cout << "Можно ехать";
        break;
    default:
        cout << "Такого варианта нет";
        break;
    }
    return 0;
}
int quest11() {
    enum AccessLevel { GUEST, USER, MODERATOR, ADMIN };
    short a;
    cout << "Введите уровень доступа (0-3): ";
    cin >> a;
    AccessLevel lvl;
    switch (a) {
    case 0:
        lvl = GUEST;
        break;
    case 1:
        lvl = USER;
        break;
    case 2:
        lvl = MODERATOR;
        break;
    case 3:
        lvl = ADMIN;
        break;
    default:
        cout << "Уровень вне диапазона 0-3";
        break;
    }
    switch (lvl) {
    case GUEST:
        cout << "Гость: только просмотр\nПрава:\n - прав нет";
        break;
    case USER:
        cout << "Пользователь: просмотр и редактирование своих данных";
        cout << "\nПрава:\n - может удалять не защищенные файлы\n - просматривать файлы\n - редактировать свои данные";
        break;
    case MODERATOR:
        cout << "Модератор: удаление сообщений, блокировка";
        cout << "\nПрава:\n - может удалять сообщения\n - редактировать данные\n - блокировать пользователей";
        break;
    case ADMIN:
        cout << "Администратор: полный доступ";
        cout << "\nПрава:\n - полный доступ";
        break;
    default:
        cout << "БлуБлуБлу";
        break;
    }
    return 0;
}
int quest12() {
    double a;
    char b;
    cout << "Введите кол-во метров: ";
    cin >> a;
    cout << "Введи первую букву единицы измерения (mm,cm,dm,km,in,ft): ";
    cin >> b;
    switch (tolower(b)) {
    case 'm':
        cout << a << " м = " << a * 1000 << " мм";
        break;
    case 'c':
        cout << a << " м = " << a * 100 << " см";
        break;
    case 'd':
        cout << a << " м = " << a * 10 << " дм";
        break;
    case 'k':
        cout << a << " м = " << a / 1000 << " км";
        break;
    case 'i':
        cout << a << " м = " << a / 39.37 << " дюйм";
        break;
    case 'f':
        cout << a << " м = " << a / 3.28 << " фут";
        break;
    default:
        cout << "Такие единицы измерения отсутствуют";
    }
    return 0;
}
int main(){
    setlocale(LC_ALL, "Ru");
    cout << "\n\n";
    quest1();
    cout << "\n\n";
    quest2();
    cout << "\n\n";
    quest3();
    cout << "\n\n";
    quest4();
    cout << "\n\n";
    quest5();
    cout << "\n\n";
    quest6();
    cout << "\n\n";
    quest7();
    cout << "\n\n";
    quest8();
    cout << "\n\n";
    quest9();
    cout << "\n\n";
    quest10();
    cout << "\n\n";
    quest11();
    cout << "\n\n";
    quest12();
    return 0;
}

