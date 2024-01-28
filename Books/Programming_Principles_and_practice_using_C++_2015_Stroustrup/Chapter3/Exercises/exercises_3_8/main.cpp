#include "std_lib_facilities.h"

int main() {
    
    cout << "Введите целое число: ";
    int val;
    while (cin >> val) {
        if (val % 2)
            cout << "Число " << val << " не четное";
        else
            cout << "Число " << val << " четное";
        cout << "\nВведите целое число:";
    }
    
    return 0;
}
