#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>

template <class T>
class STACK {
    private:
        size_t size;
        size_t max;
        T * darr;
        void resize();
    public:
        STACK();
        ~STACK();

        void push(T v);
        T pop();
		T top();
        T at(size_t index);
        void at(size_t index, T v);

        size_t getSize();
        size_t getMax();
        void print();
        int isEmpty();
};

#endif /* ARRAY_H_ */