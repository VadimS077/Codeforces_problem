#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int fact(int n) {
    if (n < 0) {
        return 0;
    } if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
int main() {
    double a = 0;
    double b = 1;
    double step = 0.1;
    double eps = 0.0001;
    

    std::cout << "    x    s(x)   f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        double sx = eps + 1;
        double s = 0;
        for (int i = 0; std::abs(sx) >= eps; i++) {
            sx = pow(2 * x, i) / fact(i);
            s += sx;
            
            


        }std::cout << std::fixed << std::setprecision(4);
        std::cout << x << " " << s << " " << pow(M_E, 2 * x) << std::endl;
    }


}