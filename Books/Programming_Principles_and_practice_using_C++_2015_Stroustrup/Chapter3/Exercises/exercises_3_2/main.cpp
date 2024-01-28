#include "std_lib_facilities.h"

int main() {
    cout << "Введите мили: ";
    double miles;
    cin >> miles;
    cout << "В км: " << miles * 1.609 << '\n';
    return 0;
}
