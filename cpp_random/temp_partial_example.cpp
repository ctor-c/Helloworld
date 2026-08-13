

/*

    example of partial specialization

*/

#include <iostream>
using namespace std;

// 1. primary template
template <typename T, typename U> 
struct CustomLogger {
    void log(T a, U b) {
        cout << "[Generic] a = " << a << ", b= " << b << "\n";
    }
};

// partial 1. both param is same
template <typename T> 
struct CustomLogger<T, T> {
    void log(T a, T b) {
        cout << "[Partial - Same types ] a = " << a << ", b= " << b << "\n";
    }
};

// partial 2, second param is fixed to int
template <typename T> 
struct CustomLogger<T, int> {
    void log(T a, int b) {
        cout << "[Partial - Second is int] a = " << a << ", b= " << b << "\n";
    }
};



// general specialization: lock down entirely to <int, double>
template <> 
struct CustomLogger<int, double> {
    void log(int a, double b) {
        cout << "[Generic] a = " << a << ", b= " << b << "\n";
    }
};




int main() {

    CustomLogger<char, float>().log('A', 3.14f);
    
    // partial 1
    CustomLogger<double, double>().log(1.1, 2.2);

    // partial 2
    CustomLogger<std::string, int>().log("Score:", 100);

    // partial 2 get precedence than general specialization
    CustomLogger<double, int>().log(6.28, 12);

    // general
    CustomLogger<int, double>().log(42, 6969.23);
    return 0;
}

