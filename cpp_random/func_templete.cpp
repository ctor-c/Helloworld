

// func. template specialization

#include <iostream>
#include <print>

using namespace std;


// generic func template
template <typename T>
void display(T value) {
    cout << "Generic display: " << value << endl;
}

// special version for char
template <>
void display<char>(char value) {
    cout << "Specialized display for char: " << value << endl;
}

int main() {

    display(52);
    display(3.15);
    display('A');
    display("Hello");

    std::print("Hello, {}!\n", "world");
    std::print(stderr, "Error: code {}\n", 42);

    return 0;
}



