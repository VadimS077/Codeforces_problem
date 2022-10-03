#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
	int n = 0;
	int r = 0;
	std::cin >> n >> r;
	long double q = M_PI;
	std::cout << std::setprecision(8) << (r * sin(q / n) / (1 - sin(q / n)));
}