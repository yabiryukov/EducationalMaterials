#include "std_lib_facilities.h"

int main() {
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = ' ';
    cout << "Пожалуйста, введит длину"
    << "и единицу измерения (c или i):\n";
    cin >> length >> unit;
    if (unit == 'i')
        cout << length << "in == "
        << cm_per_inch*length << "cm\n";
    else if (unit == 'c')
        cout << length << "cm == "
        << length/cm_per_inch << "in\n";
    else
        cout << "Извините, я не знаю, что такое '"
        << unit << "'\n";
    return 0;
}
