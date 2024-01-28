#include "std_lib_facilities.h"

class Bad_area { };

int area(int length, int width) {
    if (length <= 0 || width <= 0) throw Bad_area{};
    return length*width;
}

int main() {
    
    return 0;
}
