﻿// lab 2.1.pp
// <Осоховська Софія>
// Лабораторна робота №2.1
// Лінійні програми
// варіант 19
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;//представлення дійсних чисел

    cout << "Введіть значення a: ";//виведення даних
    cin >> a;//отримання вхідних даних з клавіатури

    //обчислення z1
    double z1 = pow(((1 + a + pow(a, 2)) / (2 * a + pow(a, 2)) + 2 - (1 - a + pow(a, 2)) / (2 * a - pow(a, 2))), -1) * (5 - 2 * pow(a, 2));

    cout << "Результат обчислення z1: " << z1 << endl;

    //обчислення z2
    double z2 = (4 - pow(a, 2)) / 2;

    cout << "Результат обчислення z2: " << z2 << endl;

    return 0;
}
