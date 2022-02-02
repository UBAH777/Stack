#pragma once
#include <cstring>


namespace BMSTU {
    template<typename T>
    class stack {
    public:

        stack() = default;

        T &top() ;

        void push(T value);

        void pop();

        size_t size() const;

        size_t capacity() const;

        ~stack() = default;

    private:
        T *_data = nullptr;
        size_t _size = 0;
        size_t _capacity = 0;
    };
}