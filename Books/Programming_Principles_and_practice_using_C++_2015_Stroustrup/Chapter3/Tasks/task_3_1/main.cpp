#include "std_lib_facilities.h"

int main() {
    cout << "Введите имя адресата\n";
    string first_name;
    cin >> first_name;
    cout << "Введите возраст адресата\n";
    int age;
    cin >> age;
    if (age <= 0 || age >= 110)
        simple_error("ты шутишь!");
    cout << "Введите имя другого приятеля\n";
    string friend_name;
    cin >> friend_name;
    char friend_sex = 0;
    cout << "Введите m - если это мужчина или f - если женщина\n";
    cin >> friend_sex;
    cout << "Дорогой " << first_name << ",\nкак дела?\n" << "Фраза 1\n" << "Фраза 2\n"
         << "Давно ли ты встречал " << friend_name << "\n";
    if (friend_sex == 'm')
        cout << "Если ты увидишь " << friend_name << ", пожалуйста, попроси его позвонить мне\n";
    if (friend_sex == 'f')
        cout << "Если ты увидишь " << friend_name << ", пожалуйста, попроси ее позвонить мне\n";
    cout << "Я слышал, ты только что отметил день рождения и тебе испольнилось " << age << " лет\n";
    if (age < 12)
        cout << "На следующий год тебе исполнится " << age+1 << " лет\n";
    else if (age == 17)
        cout << "В следующем году ты сможешь голосать\n";
    else if (age > 70)
        cout << "Я надеюсь, что ты не скучаешь на пенсии\n";
    cout << "\n\nName\n";
    return 0;
}
