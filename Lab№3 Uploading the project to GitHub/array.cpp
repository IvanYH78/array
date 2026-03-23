#include "array.h"

Array::Array(int size, int step) {
    this->size = size;
    this->step = step;
    current = 0;
    arr = new int[size];
}
Array::~Array() {
    delete[] arr;
}
void Array::showElements() {
    for (int i = 0; i < current; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Array::expandArray(int extra) {
    int newSize = size + extra;
    int* temp = new int[newSize];
    for (int i = 0; i < current; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size = newSize;
}
int Array::getSize() {
    return size;
}
int Array::getElemSize() {
    return current;
}
void Array::setValue(int val) {
    if (current == size) {
        expandArray(step);
    }
    arr[current++] = val;
}
void Array::setArray(int* pArr, int size) {
    for (int i = 0; i < size; i++) {
        setValue(pArr[i]);
    }
}