#include "std_lib_facilities.h"

int main() {
    
    cout << "Введите выражение (разрешены +, -, * и /):\n";
    cout << "Добавьте x к концу выражения (1+2*3x): ";
    int lval = 0;
    int rval = 0;
    cin >> lval;
    
    if (!cin)
        error("нет первого операнда");
    
    for (char op; cin >> op; ) {
        
        if (op != 'x')
            cin >> rval;
        
        if (!cin)
            error("нет воторого операнда");
        
        switch (op) {
            case '+':
                lval += rval;
                break;
                
            case '-':
                lval -= rval;
                break;
                
            case '*':
                lval *= rval;
                break;
                
            case '/':
                lval /= rval;
                break;
            
            default:
                cout << "Результат: " << lval << '\n';
                keep_window_open();
                return 0;
        }
        
    }
    
    error("неверное выражение");
}
