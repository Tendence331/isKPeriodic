#include <iostream>
#include <string>
#include "isKPeriodic.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    string str;
    int k;
    cout << "Введите строку чтобы узнать ее кратность" << endl;
    cin >> str;
    cout << "Введите кратность строки" << endl;
    cin >> k;
    IsKPeriodic(str, k);

    return 0;
}