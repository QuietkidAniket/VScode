#include <iostream>
#include <iomanip>

int main(){
    float f{0.1};
    double d{0.1};
    std::cout << std::setprecision(16);
    std::cout << 3.333333333333333333333333333333333f << "\n";
    std::cout << 3.333333333333333333333333333333333 << "\n";
    std::cout << std::setprecision(17);
    std::cout << f << "\n";
    std::cout << d << "\n";
    double calc {5.0/0.0};
    double calc2 {-5.0/0.0};
    double calc3 {0.0/0.0};
    std::cout << calc << "\n" << calc2 << "\n" << calc3 << "\n";
    return 0;

}