#include "std_lib_facilities.h"

int main() {
    cout << "Введите количество монет\n";
    cout << "1-центовых: ";
    int count_1;
    cin >> count_1;
    cout << "5-центовых: ";
    int count_5;
    cin >> count_5;
    cout << "10-центовых: ";
    int count_10;
    cin >> count_10;
    cout << "25-центовых: ";
    int count_25;
    cin >> count_25;
    cout << "50-центовых: ";
    int count_50;
    cin >> count_50;
    
    if (count_1 == 1)
        cout << "У вас 1 одноцентовая монета\n";
    else
        cout << "У вас " << count_1 << " одноцентовых монет\n";
    
    if (count_5 == 1)
        cout << "У вас 1 пятицентовая монета\n";
    else
        cout << "У вас " << count_5 << " пятицентовых монет\n";
    
    if (count_10 == 1)
        cout << "У вас 1 десятицентовая монета\n";
    else
        cout << "У вас " << count_10 << " десятицентовых монет\n";
    
    if (count_25 == 1)
        cout << "У вас 1 двадцатипятицентовая монета\n";
    else
        cout << "У вас " << count_25 << " двадцатипятицентовых монет\n";
    
    if (count_50 == 1)
        cout << "У вас 1 пятидесятицентовая монета\n";
    else
        cout << "У вас " << count_50 << " пятидесятицентовых монет\n";
    
    cout << "Общая стоимость ваших манет равна "
         << (count_1 + count_5 * 5 + count_10 * 10 + count_25 * 25 + count_50 * 50) / 100
         << " долларов "
         << (count_1 + count_5 * 5 + count_10 * 10 + count_25 * 25 + count_50 * 50) % 100
         << " цента\n";
    
    return 0;
}
