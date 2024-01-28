#include "std_lib_facilities.h"

int main() {
    cout << "Введите два вещественных числа: ";
    double val1, val2;
    cin >> val1 >> val2;
    
    cout << "Наибольшее значение: ";
    
    if (val1 > val2)
        cout << val1;
    else
        cout << val2;
    
    cout << "\nНаименьшее значение: ";
    
    if (val1 < val2)
        cout << val1;
    else
        cout << val2;
    
    cout << "\nСумма: " << val1 + val2
         << "\nРазность: " << val1 - val2
         << "\nПроизведение: " << val1 * val2
         << "\nЧастное: " << val1 / val2 << '\n';
    
    return 0;
}
