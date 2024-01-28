#include "std_lib_facilities.h"

void f_error(string s1, string s2) {
    throw runtime_error(s1+s2);
}

double some_function() {
    double d;
    cin >> d;
    if (!cin)
        f_error("не получается считать число в ",
                "'some_function'");
    return d;
}

int main()
try {
    some_function();
    return 0;
} catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
} catch (...) {
    cerr << "Неизвестное исключение\n";
    keep_window_open();
    return 2;
}
