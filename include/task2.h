#pragma once

// Проверка числа на простоту
// Проверка будет осуществляться по вероятностному алгоритму основанному на тесте Ферма
// А нет простым перебором
bool checkPrime(unsigned int value);

// Нахождение n - ого простого числа(в ряду).
unsigned long long nPrime(unsigned int n);

// Нахождение ближайшего следующего простого числа к value.
unsigned long long nextPrime(unsigned long long value);