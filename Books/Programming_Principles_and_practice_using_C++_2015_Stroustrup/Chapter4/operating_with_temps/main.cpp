#include "std_lib_facilities.h"

int main() {
    
    vector<double> temps;
    for (double temp; cin >> temp; )
        temps.push_back(temp);
    
    double sum = 0;
    for (int x : temps) sum += x;
    
    cout << "Средняя температура: "
    << sum/temps.size() << '\n';
    
    sort(temps);
    cout << "Медианная температура: "
    << temps[temps.size()/2] << '\n';
    
    return 0;
}
