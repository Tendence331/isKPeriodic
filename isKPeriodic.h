#pragma once
#include <iostream>

bool IsKPeriodic(std::string& str, int k)
{
    int size = str.size();  // вычисляем размер нашей строки 
    if (size % k > 0)       // если размер кратен числу больше нуля
    {
        std::cout << ">> " << str << " <<: cтрока не кратна " << k << std::endl;     // строка не кратна
        return false;
    }
    for (int i = 0; i < size; i++)      // в цикле проходим на нашему размеру строки
    {
        if (str[i] != str[i % k])       // если символ текущий строки не равен символу строки % числу
        {
            std::cout << ">> " << str << " <<: cтрока не кратна! " << k << std::endl;        // строка не кратна
            return false;
        }
    }
    std::cout << ">> " << str << " <<: cтрока кратна " << k << std::endl;
    return true;
}