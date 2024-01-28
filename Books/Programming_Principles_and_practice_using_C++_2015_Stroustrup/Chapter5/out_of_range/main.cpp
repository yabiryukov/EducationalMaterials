#include "std_lib_facilities.h"

int main()
try {
    vector<int> v;
    
    for (int i; cin >> i;)
        v.push_back(i);
    
    for (int i = 0; i <= v.size(); ++i)
        cout << "v[" << i << "] == " << v[i] << endl;
    
} catch (out_of_range) {
    cerr << "Ошибка диапазона!\n";
    return 1;
} catch (...) {
    cerr << "Исключение: что-то пошло не так\n";
    return 2;
}
