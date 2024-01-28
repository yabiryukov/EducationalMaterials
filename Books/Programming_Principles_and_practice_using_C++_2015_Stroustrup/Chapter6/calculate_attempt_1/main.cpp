#include "std_lib_facilities.h"

int main() {
    
    cout << "Введите выражение (разрешены + и -): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval >> op >> rval;
    if (op == '+')
        res = lval + rval;
    else if (op == '-')
        res = lval - rval;
    
    cout << "Результат: " << res << '\n';
    keep_window_open();
    
    return 0;
}
