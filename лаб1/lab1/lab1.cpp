#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "HELLO!!!\n";

    cout << "* * * * * * * * *\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "*\t\t*\n"
        "* * * * * * * * *\n";

    cout << "       Прiзвище : Чемерис\n\t"
        "    Iмя : Катерина\n"
        "    По батьковi : Володимирівна\n\t"
        "  Стать : жiноча\n"
        "Дата народження : 13.06.2004\n\t"
        " Адреса : Дніпро\n"
        " Номер телефону : +380996616000\n"
        " Мiсце навчання : ФПМ, ДНУ iм. Олеся Гончара\n\t"
        "   Курс : 2\n\t"
        "  Хоббi : фігурне катання\n";

    return 0;
}