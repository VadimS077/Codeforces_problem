#include <iostream>
#include <cmath>
#include <iomanip>

double fact(int n) {
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
    double a = -1;
    double b = 1;
    double step = 0.1;
    double eps = 0.001;
    double sx = 0;
    double s = 0;
    std::cout << "    x    s(x)   f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        sx = 1;
        s = 0;
        for (int i = 1; i < 100; i++) {
            if (std::abs(sx) >= eps) {
                s += sx;
                sx = pow(-1, i) * pow(x, 2 * i) / fact(2 * i);

            }
            else {
                break;
            }
        }std::cout << std::fixed << std::setprecision(3);
        std::cout << x << " " << s << " " << std::cos(x) << std::endl;
    }


}