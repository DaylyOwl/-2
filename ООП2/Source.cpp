#include <iostream>
using namespace std;

int main() {
    setlocale(0, "ru");
    char op;
    float num1, num2;

    cout << "������� �������� (+, -, *, /): ";
    cin >> op;

    cout << "������� ��� �����: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << "���������: " << num1 + num2;
        break;
    case '-':
        cout << "���������: " << num1 - num2;
        break;
    case '*':
        cout << "���������: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << "���������: " << num1 / num2;
        else
            cout << "������: ������� �� ����";
        break;
    default:
        cout << "�������� ��������!";
        break;
    }

    return 0;
}
