#include <iostream>
#include <Windows.h>

#include "Counter.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter counter;

    char command = ' ';
    char y_n = 'y';
    bool error = true;
    int count;

    while (error == true)
    {
        cout << "Вы хотите задать начальное значение счетчика? (y/n): ";
        cin >> y_n;
        cout << endl;

        switch (y_n)
        {
        case 'y':
            cout << "Введите начальное значение счетчика: ";
            clear();
            cin >> count;
            cout << endl;
            counter = Counter(count);

            error = false;
            break;
        case 'n':
            counter = Counter();

            error = false;
            break;
        default:
            cout << endl << "Введена неверная команда. Попробуйте еще раз.";
            cout << endl << "=============================================" << "\n\n\n";

            error = true;
            break;
        }
    }

    while (true)
    {
        cout << "Введите команду ('+', '-', '=' или 'x' - на английской раскладке): ";

        cin >> command;

        switch (command)
        {
        case '+':
            counter.sum();
            break;
        case '-':
            counter.dif();
            break;
        case '=':
            counter.show();
            break;
        case 'x':
            return 0;
            break;
        default:
            clear();

            cout << endl << "Введена неверная команда. Попробуйте еще раз.";
            cout << endl << "=============================================" << "\n\n\n";

            break;
        }

    }

    return 0;
}
