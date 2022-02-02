#include "stack.h"
#include <cstring>


template<typename T>
T& BMSTU::stack<T>::top() {
    return *(_data + _size - 1);
}

template<typename T>
void BMSTU::stack<T>::push(T value) {
    if (_capacity == 0) {
        _capacity = 1;
        _size = 1;
        _data = new T[_capacity];
        *(_data) = value;
    }
    else {
        if (_capacity > 0) {
            if (_size < _capacity) {
                *(_data + _size) = value;
                _size++;
            }
            else {
                _capacity = _capacity * 2;
                T* tmp = new T[_capacity];
                memcpy(tmp, _data, sizeof(T) * _size);
                *(tmp + _size) = value;
                _size++;
                delete[] _data;
                _data = tmp;
            }
        }
    }
}

template<typename T>
void BMSTU::stack<T>::pop() {
    _size--;
}

template<typename T>
size_t BMSTU::stack<T>::size() const {
    return this->_size;
}

template<typename T>
size_t BMSTU::stack<T>::capacity() const {
    return this->_capacity;
}
