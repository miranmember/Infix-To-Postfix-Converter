#include <stdexcept>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "myStack.h"

using namespace std;

template <class T>
STACK<T>::STACK() : max(2), size(0) {
    darr = (T*) malloc(max * sizeof(*darr));
}

template <class T>
STACK<T>::~STACK() {
    free(darr);
}

template <class T>
T STACK<T>::pop() {
    return *(darr + --size);
}

template <class T>
void STACK<T>::push(T v) {
    if (size >= max)
        resize();
    *(darr + size++) = v;
}

template <class T>
T STACK<T>::top() {
    return *(darr + (size - 1));
}

template <class T>
T STACK<T>::at(size_t index) {
    return *(darr + index);
}

template <class T>
void STACK<T>::at(size_t index, T v) {
    while (index >= size)
        push(0);
    *(darr + index) = v;
}

template <class T>
size_t STACK<T>::getSize() {
    return size;
}

template <class T>
size_t STACK<T>::getMax() {
    return max;
}

template <class T>
void STACK<T>::resize() {
    max = max * 2;
    darr = (T*) realloc(darr, max * sizeof(*darr));
}

template <class T>
void STACK<T>::print() {
    size_t i = 0;
    while (i < size) {
        cout << at(i) << endl;
        i++;
    }
}

template <class T>
int STACK<T>::isEmpty() {
    return size == 0;
}

template class STACK<int>;
template class STACK<float>;
template class STACK<char>;
template class STACK<string>;
