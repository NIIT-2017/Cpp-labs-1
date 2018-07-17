#pragma once

// Функия нахождения наименьшего общего кратного НОК для всех натуральных чисел лежащими в интервале min - max
unsigned long findValue(unsigned int min, unsigned int max);

// Функция для проверки корректности ввода
unsigned int getValue();

// Функция находления наибольшего общего делителя НОД для двух чисел
// Находим НОД по иттерационному алгоритму Евклида
unsigned long nod(unsigned long a, unsigned long b);
