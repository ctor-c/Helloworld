

// implicit template instantiation

#include <iostream>
#include <string>
#include <vector>

template <typename T>
class MyClass {
    public:
    MyClass(T t) {}
    std::string getType() const {
        return typeid(T).name();
    }
};

template <typename T>
bool isSmaller(T fir, T sec) {
    return fir < sec;
}

int main() {
    std::cout << std::endl;

    std::cout << std::boolalpha;

    std::vector vec{1,2,3,4,5};         // (1)
    std::cout << "vec.size(): " << vec.size() << std::endl;

    MyClass myClass(5);                 // (2)
    std::cout << "myClass.getType(): " << myClass.getType() << std::endl;

    std::cout << std::endl;

    std::cout << "isSmaller(5, 10): "     // (3)
            << isSmaller(5, 10) << std::endl;
    std::cout << "isSmaller<double>(5.5f, 6.5): "
            << isSmaller<double>(5.5f, 6.5) << std::endl;   // (4)


    return 0;
}







