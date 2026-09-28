#include <iostream>
#include <string>
using namespace std;


int pizza() {
    float pizza_id, drink_id, pizza_price, drink_price, pizza_n, drink_n;
    string a, b;
    cout << "МЕНЮ:\n\nПиццы:  1. Мацарелла 7$ \n\t2. Пеперони 8$ \n\t3. Классическая 8$ \n\t4. Мясная 10$";
    cout << "\nВведите номер пиццы: ";
    cin >> pizza_id;
    cout << "\nВведите кол-во пицц: ";
    cin >> pizza_n;

    cout << "МЕНЮ:\n\nНапитки: 1. Кока-кола 2$ \n\t 2. Чай с сахаром 1$ \n\t 3. Молочный коктель 4$";
    cout << "\nВведите номер напитка: ";
    cin >> drink_id;
    cout << "\nВведите кол-во напиков: ";
    cin >> drink_n;

    if (pizza_id == 1) {
        pizza_price = 7;
        a = "Мацарелла";
    }
    else if (pizza_id == 2) {
        pizza_price = 8;
        a = "Пеперони";
    }
    else if (pizza_id == 3) {
        pizza_price = 8;
        a = "Классическая";
    }
    else if (pizza_id == 4) {
        pizza_price = 10;
        a = "Мясная";
    }
    else {
        cout << pizza_id<<" такого номера пиццы нет";
        return 0;
    }

    if (drink_id == 1) {
        drink_price = 2;
        b = "Кока-кола";
    }
    else if (drink_id == 2) {
        drink_price = 1;
        b = "Чай с сахаром";
    }
    else if (drink_id == 3) {
        drink_price = 4;
        b = "Молочный коктель";
    }
    else {
        cout << drink_id << " такого номера напитка нет";
        return 0;
    }
    cout << "\nЧек:\n\n" << "" << "Название:\t" << "Кол-во:\t" << "Цена:\n"; 
    cout<< a << "\t\t  " << pizza_n <<"\t " << (pizza_n * pizza_price)-((pizza_n/5)*pizza_price)<<"\n";

    if (drink_n > 3 && drink_price > 2) {
         drink_id = (drink_n * drink_price) - ((drink_n * drink_price) * 0.15);
         cout << b << "   " << drink_n << "\t" << drink_id;
    }
    else {
         drink_id =(drink_n * drink_price);
         cout << b << "\t" << drink_n << "\t" << drink_id;
    }
    
    if (((pizza_n * pizza_price) - ((pizza_n / 5) * pizza_price)+drink_id)>50) {
        cout << "\n\t\tИТОГО: " << ((pizza_n * pizza_price) - ((pizza_n / 5) * pizza_price) + drink_id)-((pizza_n * pizza_price) - ((pizza_n / 5) * pizza_price) + drink_id) * 0.20;
    }
    else {
        cout << "\n\t\tИТОГО: " << ((pizza_n * pizza_price) - ((pizza_n / 5) * pizza_price) + drink_id);
    }
    return 0;
}
int manager() {
    int a, b, c, max=0;
    float ap, bp, cp;
    cout << "Введите продажи менеджера 1: ";
    cin >> a;
    cout << "Введите продажи менеджера 2: ";
    cin >> b;
    cout << "Введите продажи менеджера 3: ";
    cin >> c;
    if (a < 500) {
        ap = 200+(a*0.03);

    }
    else if (a <1000) {
        ap =200+(a*0.05);
    }
    else {
        ap =200+(a*0.08);
    }
    

    if (b < 500) {
        bp =200+( b*0.03);
    }
    else if (b < 1000) {
        bp = 200+(b*0.05);
    }
    else {
        bp = 200+(b*0.08);
    }
    

    if (c < 500) {
        cp = 200+(c*0.03);
    }
    else if (c < 1000) {
        cp = 200+(c*0.05);
    }
    else {
        cp = 200+(c*0.08);
    }

    if (max < ap) { max = ap; }
    if (max < bp) { max = bp; }
    if (max < cp) { max = cp; }

    if (max == ap) {
        cout << "\nМэнеджер 1 молодец: " << ap + 200 << "\nМэнеджер 2: " << bp << "\nМэнеджер 3: " << cp;
    }
    else if (max == bp) {
        cout << "\nМэнеджер 1: " << ap << "\nМэнеджер 2 молодец: " << bp + 200 << "\nМэнеджер 3: " << cp;
    }
    else {
        cout << "\nМэнеджер 1: " << ap << "\nМэнеджер 2: " << bp << "\nМэнеджер 3 молодец: " << cp + 200;
    }

    return 0;
}
int main(){
    setlocale(LC_ALL, "RU");
    cout << "\n\n";
    pizza();
    cout << "\n\n";
    manager();
    return 0;
}

