#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int step;
    int* arr;
    int current;
public:
    Array(int size = 10, int step = 5);
    ~Array();
    void showElements();
    void expandArray(int size);
    int getSize();
    int getElemSize();
    void setValue(int val);
    void setArray(int* pArr, int size);
};
#endif
