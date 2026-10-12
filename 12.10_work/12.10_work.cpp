#include <iostream>

using namespace std;

int quest1() {
	char a;
	cout << "Задание 1 \"Робот-свотофор\"\n\n";
	cout << "Введите цвет (red - r, yellow - y, green - g): ";
	cin >> a;
	switch (a) {
	case 'R':
	case 'r':
		cout << "СТОЙ!";
		break;
	case 'Y':
	case 'y':
		cout << "Приготовься!";
		break;
	case 'G':
	case 'g':
		cout << "Let\'s go!";
		break;
	default:
		cout << "Не знаю такого цвета";
		break;
	}
	return 0;
}

int quest2() {
	char name;
	int password;

	cout << "Введите логин: ";
	cin >> name;

	if (name != 'a' && name != 'A') {
		cout << "Кто вы такой?";
	}
	else {
		cout << "Введите пороль: ";
		cin >> password;
		if (password != 1234) {
			cout << "Неверный пороль!";
		}
		else {
			cout << "Добро пожаловать, Мистер admin";
		}
	}
	return 0;
}

int quest3() {
	int a;
	cout << "Введите уровень дня (1-10): ";
	cin >> a;
	if (1 < a || a <= 3) {
		cout << "Держись, всё наладиться :(";
	}
	else if (4 < a || a <= 6) {
		cout << "Нормальный день -_-";
	}
	else if (7 < a || a <= 10) {
		cout << "Отличный день! :)";
	}
	else {
		cout << "Такого уровня не существует";
	}
	return 0;
}

int quest4() {
	char a; //a=97; z=122 a b c d 
	cout << "Введите строчную букву ан-яз алфавита: ";
	cin >> a;
	if (97 <= a && a <= 119) {
		cout << a << " станет " << char(a + 3);
	}
	else if (119 < a && a < 123) {
		switch (a) {
		case 'x':
			cout << a << " Станет a";
			break;
		case 'y':
			cout << a << " Станет b";
			break;
		case 'z':
			cout << a << " Станет c";
			break;
		default:
			cout << a;
			break;
		}
	}
	else {
		cout << a << " - нет в ан-яз алфавите";
	}
	return 0;
}

int quest5() {
	char a; //выбор компа == б;
	cout << "Введите (k - камень, b - бумага, n - ножницы): ";
	cin >> a;
	switch (a) {
	case 'k':
		cout << "\nВы выбрали: камень\nПК выбрал: бумага\nПобедитель: ПК";
		break;
	case 'n':
		cout << "\nВы выбрали: Ножницы\nПК выбрал: бумага\nПобедитель: ВЫ!";
		break;
	case 'b':
		cout << "\nВы выбрали: Бумага\nПК выбрал: бумага\nПобедитель: никто, у вас ничья";
		break;
	default:
		cout << "\nлом крутой приём, но не сейчас";
		break;
	}
	return 0;
}

int quest6() {
	int a, b; // a - текущий этаж; b - нужный этаж;
	cout << "Введите текущий этаж (1-9): ";
	cin >> a;
	cout << "Введите нужный этаж (1-9): ";
	cin >> b;
	if (a == b && ((a <= 9 && a > 0) || (b <= 9 && b > 0))) {
		cout << "Вы уже на нужном этаже";
	}
	else if (a < b && ((a <= 9 && a > 0) || (b <= 9 && b > 0))) {
		cout << "Едем вверх!!!";
	}
	else if (a > b && ((a <= 9 && a > 0) || (b <= 9 && b > 0))) {
		cout << "Тащимся вниз!!!";
	}
	else {
		cout << "Неверный этаж";
	}
	return 0;
}

int quest7() {
	char a;
	cout << "Введите цифру, оператор или скобку: ";
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << a << " - Цифра";
	}
	else {
		switch (a) {
		case '+':
		case '-':
		case '*':
		case '/':
			cout << a << " - Оператор";
			break;
		case '(':
		case ')':
		case '[':
		case ']':
		case '}':
		case '{':
			cout << a << " - Скобка";
			break;
		default:
			cout << "Неизвестный символ";
			break;
		}
	}
	return 0;
}

int quest8() {
	short x1, x2, y1, y2;
	cout << "Введите кардинаты клетки на которой стоит фигура: ";
	cout << "\nВведите x1: ";
	cin >> x1;
	cout << "Введите y1: ";
	cin >> y1;
	cout << "Введите кардинаты клетки на которую хотите её переместить: ";
	cout << "\nВведите x2: ";
	cin >> x2;
	cout << "Введите y2: ";
	cin >> y2;
	if ((x1 < 1 || x1>8) || (y1 < 1 || y1>8) || (x2 < 1 || x2>8) || (y2 < 1 || y2>8)) {
		cout << "Каординаты вне диапазона (1-8)";
		
	}
	else {
		if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) {
			cout << "Да такой ход возможен";
		}
		else {
			cout << "Нет, так нельзя сходить";
		}
	}
	return 0;
}

int quest9() {
	short a;
	cout << "Введите число (1-10): ";
	cin >> a;
	switch (a) {
	case 1:
		cout <<a<<" - I";
		break;
	case 2:
		cout << a << " - II";
		break;
	case 3:
		cout << a << " - III";
		break;
	case 4:
		cout << a << " - IV";
		break;
	case 5:
		cout << a << " - V";
		break;
	case 6:
		cout << a << " - VI";
		break;
	case 7:
		cout << a << " - VII";
		break;
	case 8:
		cout << a << " - VIII";
		break;
	case 9:
		cout << a << " - IX";
		break;
	case 10:
		cout << a << " - X";
		break;
	default:
		cout <<a<<" - Вне диапазона 1-10";
	}
	return 0;
}

int quest10() {
	int a, a1,a2,a3,a4,a5;
	cout << "Введите шестизначное число: ";
	cin >> a;
	if (a / 100000 != 0 && a/100000<10) {
		a1 = a / 100000;
		a2 = (a / 10000) % 10;
		a3 = (a / 1000) % 10;
		a4 = (a / 100) % 10;
		a5 = (a / 10) % 10;
		a = a % 10;
		if ((a1 + a2 + a3) % 2 == 0 && (a4 + a5 + a) % 2 != 0) {
			cout << "Ваши билет счастливый!!!";
		}
		else if ((a1 + a2 + a3) % 2 != 0 && (a4 + a5 + a) % 2 == 0) {
			cout << "Ваши билет счастливый!!!";
		}
		else {
			cout << "Увы и ах ваш билет, просто билет";
		}
	}
	else {
		cout << a << " - не шестизначное число";
	}
	
	return 0;
}

int quest11() {
	int a, sw_id;
	cout << "Введите сумму кратную 10: ";
	cin >> a;
	if (a % 10 !=0 ) {
		cout << "\n" << a << " - не кратно 10";
		return 0;
	}
	else if (a < 0) {
		cout << "\n" <<a<<" - отрицательное число";
		return 0;
	}
	cout << "\nВыберите режим: ";
	cout << "\n  1 — выдать минимальным числом купюр (5000, 2000, 1000, 500, 200, 100, 50, 10)";
	cout << "\n  2 — выдать только крупными (5000, 1000, 100)";
	cout << "\n  3 — отмена.";
	cout << "\nВведите номер режима: ";
	cin >> sw_id;
	switch (sw_id) {
	case 1:
		cout << "\nВывод: \n5000x" << a / 5000;
		cout << "\n2000x" << (a % 5000)/2000;
		cout << "\n1000x" << ((a % 5000) % 2000)/1000;
		cout << "\n500x" << (((a % 5000) % 2000) % 1000)/500;
		cout << "\n200x" << ((((a % 5000) % 2000) % 1000) % 500)/200;
		cout << "\n100x" << (((((a % 5000) % 2000) % 1000) % 500) % 200)/100;
		cout << "\n50x" << ((((((a % 5000) % 2000) % 1000) % 500) % 200) % 100)/50;
		cout << "\n10x" << (((((((a % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50)/10;
		break;
	case 2:
		if (a % 100 != 0) {
			cout<<"\n" << a << " - не возможно выдать в данном режиме";
		}
		else {
			cout << "\nВывод: \n5000x"<<a/5000<<"\n1000x"<<(a % 5000)/1000<<"\n100x"<<((a % 5000) % 1000)/100;
		}
		break;
	case 3:
		cout << "\nГаля, у нас отмена";
		break;
	default:
		cout << "\nТакого режима нет";
		break;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "RU");
	quest11();
	return 0;
}