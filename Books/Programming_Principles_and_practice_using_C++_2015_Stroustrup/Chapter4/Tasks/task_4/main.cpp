#include "std_lib_facilities.h"

int main() {
    
    double val1, val2;
    while (cin >> val1 >> val2) {
        cout << val1 << ", " << val2 << '\n';
        
        if (val1 == val2)
            cout << "Числа равны" << '\n';
        else if (abs(val1-val2) < 1.0/100)
            cout << "Числа почти равны" << '\n';
        else if (val1 > val2) {
            cout << "Наименьшее значение равно: " << val2 << '\n';
            cout << "Наибольшее значение равно: " << val1 << '\n';
        } else {
            cout << "Наименьшее значение равно: " << val1 << '\n';
            cout << "Наибольшее значение равно: " << val2 << '\n';
        }
        
    }
    
    return 0;
}
