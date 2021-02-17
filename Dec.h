#pragma once

#include <iostream>

using namespace std;

//структура и методы это 
struct dek
{
public:
   
    int push_front(int n);

    int push_back(int n);

    int pop_front();

    int pop_back();

    const int SIZE = 10000;

    int storage[10000];

    int _size = 0, start = 0, end = 0;

//private:

    int front();

    int back();


};