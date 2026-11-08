#include <iostream>
#include <time.h>

using namespace std;
int quest1() {
	int dif, answer, n_p=0, n=0;
	cout << "Введите уровень сложности (1-4): ";
	cin >> dif;
	if (!(dif < 5 && dif>0)) {
		cout << "ERROR: " << dif << " !=[1:4]";
		return 0;
	}
	for (int j = dif; j < (dif+1)*2;++j) {
		for (int i =dif+1 ; i < (dif + 1) * 2;++i) {
			n++;
			cout << j << "*" << i << "=";
			cin >> answer;
			if (answer == j * i) {
				cout << "Вы молодец";
				n_p++;
			}
			else {
				cout << "Вы холодец";
			}
			cout <<"\nОТВЕТ: " << j << "*" << i << "=" << j * i << "\n";
		}
		cout << "\n";
	}

	cout << "\n\nКол-во вопросов: "<<n<<"\nКол-во правильных ответов: "<<n_p<<"\n\n";
	switch (dif)
	{
	case 1:
		if (n_p == 6 || n_p == 29) { cout << "Оценка 5, вы большой молодец"; }
		else if (n_p >= 20) { cout << "Оценка 4, хороший результат"; }
		else if (n_p >= 15) { cout << "Оценка 3, неплохо"; }
		else { cout << "Оценка 2, бывает"; }
		break;
	case 2:
		if (n_p == 12 || n_p == 11) { cout << "Оценка 5, вы большой молодец"; }
		else if (n_p >= 8) { cout << "Оценка 4, хороший результат"; }
		else if (n_p >= 5) { cout << "Оценка 3, неплохо"; }
		else { cout << "Оценка 2, бывает"; }
		break;
	case 3:
		if (n_p == 20 || n_p == 19) { cout << "Оценка 5, вы большой молодец"; }
		else if (n_p >= 15) { cout << "Оценка 4, хороший результат"; }
		else if (n_p >= 10) { cout << "Оценка 3, неплохо"; }
		else { cout << "Оценка 2, бывает"; }
		break;
	case 4:
		if (n_p == 30 || n_p == 29) { cout << "Оценка 5, вы большой молодец"; }
		else if (n_p>=25){ cout << "Оценка 4, хороший результат"; }
		else if(n_p>=20){ cout << "Оценка 3, неплохо"; }
		else { cout << "Оценка 2, бывает"; }
		break;
	default:
		break;
	}
	return 0;
}

int quest2() {
	for (int j = 0; j < 10;j++) {
		for (int i = 0; i < 10;i++) {
			if ((j<5&&(i==5-j||i==5+j)) || (j>4 && (i==j-4||14==j+i))) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}


int main(){
	setlocale(LC_ALL, "Ru");
	cout << "\n\n==== Задание 1 ====\n\n";
	quest1();
	cout << "\n\n==== Задание 2 ====\n\n";
	quest2();

	return 0;
}

