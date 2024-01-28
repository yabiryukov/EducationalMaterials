#include "std_lib_facilities.h"

int main() {
    
    char ch = 'a';
    while (ch <= 'z') {
        cout << int(ch) << " " << ch << '\n';
        ++ch;
    }
    return 0;
}

