#include "std_lib_facilities.h"

void f_error(string s) {
    throw runtime_error(s);
}

double some_function() {
    double d = 0;
    cin >> d;
    if (!cin)
        f_error("Не могу считать число double"
              " в 'some_function()' ");
    return d;
}

int main()
try {
    some_function();
    return 0;
} catch (runtime_error& e) {
    cerr << "runtime error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}


