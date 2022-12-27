#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a = 0;
    double b = 1;
    double step = 0.05;
    double eps = 0.001;
    double sx = 0;
    double s = 0;
    const double PI = acos(-1.0);
    std::cout << "    x    s(x)   f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        sx = x * std::sin(PI / 4);
        s = 0;
        for (int i = 2; i < 100; i++) {
            if ((std::abs(sx)) >= eps || (i % 4 == 0)) {
                s += sx;
                sx = pow(x, i) * std::sin(i * PI / 4);

            }
            else {
                break;
            }
        }std::cout << std::fixed << std::setprecision(3);
        std::cout << x << " " << s << " " << (x * std::sin(PI / 4)) / (1 - 2 * x * std::cos(PI / 4)) << std::endl;
    }


}