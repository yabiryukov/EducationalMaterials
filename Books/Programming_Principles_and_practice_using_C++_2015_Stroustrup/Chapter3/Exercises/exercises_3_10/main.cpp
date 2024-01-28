#include "std_lib_facilities.h"

int main() {
    
    cout << "Введите операцию и два вещественных числа: ";
    string operation;
    double val1, val2;
    cin >> operation >> val1 >> val2;
    
    if (operation == "+" || operation == "plus")
        cout << val1 + val2;
    else if (operation == "-" || operation == "minus")
        cout << val1 - val2;
    else if (operation == "*" || operation == "mul")
        cout << val1 * val2;
    else if (operation == "/" || operation == "div")
        cout << val1 / val2;
    cout << '\n';
    return 0;
}
