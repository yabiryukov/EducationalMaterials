#include "std_lib_facilities.h"

int main() {
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin >> current) {
        ++number_of_words;
        if (current == previous)
            cout << "Повторяющееся слово: " << current << " после " << number_of_words << " слов." << '\n';
        previous = current;
    }
    return 0;
}
