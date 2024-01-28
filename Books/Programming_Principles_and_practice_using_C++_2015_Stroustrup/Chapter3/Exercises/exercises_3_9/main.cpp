#include "std_lib_facilities.h"

int main() {
    
    cout << "Введите название числа: ";
    string val;
    bool correct = true;
    bool tmp;
    while (cin >> val) {
        tmp = true;
        
        if (val == "ноль")
            cout << 0;
        else if (val == "один")
            cout << 1;
        else if (val == "два")
            cout << 2;
        else if (val == "три")
            cout << 3;
        else if (val == "четыре")
            cout << 4;
        else if (val == "пять")
            cout << 5;
        else if (val == "шесть")
            cout << 6;
        else if (val == "семь")
            cout << 7;
        else if (val == "восемь")
            cout << 8;
        else if (val == "девять")
            cout << 9;
        else {
            if (correct) {
                cout << "Я не знаю такого числа";
                correct = false;
            }
            tmp = false;
        }
        
        if (tmp)
            correct = true;
        
        cout << "\nВведите название числа: ";
    }
    
    return 0;
}
