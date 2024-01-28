#include "std_lib_facilities.h"

int main() {
    cout << "Введите три целых числа: ";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;
    
    if (val1 <= val2 && val1 <= val3) {
        cout << val1;
        if (val2 <= val3)
            cout << " " << val2 << " " << val3;
        else
            cout << " " << val3 << " " << val2;
    } else if (val2 <= val3) {
        cout << val2;
        if (val1 <= val3)
            cout << " " << val1 << " " << val3;
        else
            cout << " " << val3 << " " << val1;
    } else {
        cout << val3;
        if (val1 <= val2)
            cout << " " << val1 << " " << val2;
        else
            cout << " " << val2 << " " << val1;
    }
    
    cout << '\n';
    
    return 0;
}
