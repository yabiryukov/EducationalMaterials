#include "std_lib_facilities.h"

int main()
try {
    cout << "Success!\n";
    keep_window_open();
    return 0;
} catch (exception& e) {
    cerr << "Ошибка: " << e.what() << '\n';
    keep_window_open();
    return 1;
} catch (...) {
    cerr << "Неизвестное исключение!\n";
    keep_window_open();
    return 2;
}
