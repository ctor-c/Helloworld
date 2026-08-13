

#include <iostream>


// purpose of templates specialization

template <typename T>
class Printer {
    public:
    void print(T data) {
        std::cout << "Generic: " << data << std::endl;
    }
};

// Full specialization for char
template <>
class Printer<char> {
    public:
    void print(char data) {
        std::cout << "Character: " << data << std::endl;
    }
};

int main() {
    Printer<int> p1;
    p1.print(100);

    Printer<std::string> p2;
    p2.print("Hello");

    Printer<char> p3;
    p3.print('A');

    return 0;
}












