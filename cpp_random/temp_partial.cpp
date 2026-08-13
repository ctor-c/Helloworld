

#include <iostream>

// templates
template <typename T, typename U>
struct DataProcessor {
    void process() {}
};


// full(general) specialization for <int, double>
template <>
struct DataProcessor<int, double> {
    void process() {}
};

// partial specialization
// 특정 파마메터만 특수화한다.
template <typename T>
struct DataProcessor<T, T> {
    void process() {}
};

// case of second param is fixed
template <typename T>
struct DataProcessor<T, int>
{
    void process() {}
};

int main() {

    return 0;
}



