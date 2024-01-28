#include <iostream>
#include <iomanip>

int main() {
    using std::cout;
    using std::cin;
    
    cout << "Введите X: ";
    double x;
    cin >> x;
    
    cout << pow(x, 2) << '\n';

    return 0;
}
