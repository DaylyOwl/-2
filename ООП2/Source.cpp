#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    char op;
    float num1, num2;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << "Результат: " << num1 + num2;
        break;
    case '-':
        cout << "Результат: " << num1 - num2;
        break;
    case '*':
        cout << "Результат: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << "Результат: " << num1 / num2;
        else
            cout << "Ошибка: деление на ноль";
        break;
    default:
        cout << "Неверный оператор!";
        break;
    }

    return 0;
}
