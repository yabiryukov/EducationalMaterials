#include "std_lib_facilities.h"

int main() {
    constexpr int cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr int in_per_ft = 12;
    
    double val = 0;
    double val_cm = 0;
    string unit = " ";
    double min_cm = 0, max_cm = 0;
    int counter = 0;
    double sum = 0;
    vector <double> vals_cm;
    while (cin >> val >> unit) {
        
        cout << val << unit << '\n';
        
        if (unit == "m")
            val_cm = val * cm_per_m;
        else if (unit == "in")
            val_cm = val * cm_per_in;
        else if (unit == "ft")
            val_cm = val * in_per_ft * cm_per_in;
        else if (unit == "cm")
            val_cm = val;
        else
            continue;
        
        if (!counter || val_cm < min_cm) {
            min_cm = val_cm;
            cout << "Наименьшее среди введенных: " << val << unit << '\n';
        }
        
        if (!counter || val_cm > max_cm) {
            max_cm = val_cm;
            cout << "Наибольшее среди введенных: " << val << unit << '\n';
        }
        
        vals_cm.push_back(val_cm);
        sum += val_cm;
        ++counter;
    }
    
    sort(vals_cm);
    for (double d : vals_cm)
        cout << d << "cm\n";
    
    cout << "Наименьшее введенное значение: " << min_cm << "cm\n";
    cout << "Наибольшее введенное значение: " << max_cm << "cm\n";
    cout << "Количество введнных занчений: " << counter << '\n';
    cout << "Сумма введнных значений: " << sum << "cm\n";
    
    return 0;
}
