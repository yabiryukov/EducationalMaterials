#include "std_lib_facilities.h"

int main() {
    
    vector<double> temps;
    
    for (double temp; cin >> temp; )
        temps.push_back(temp);
    
    double sum = 0;
    double high_temp = -1000;
    double low_temp = 1000;
    int no_of_temps = 0;
    
    for (double x : temps) {
        ++no_of_temps;
        if (x > high_temp) high_temp = x;
        if (x < low_temp) low_temp = x;
        sum += x;
    }
    
    cout << "Максимальная температура: " << high_temp << "\n";
    cout << "Минимальная температура: " << low_temp << "\n";
    cout << "Средняя температура: " << sum/temps.size() << "\n";
    
    return 0;
}
