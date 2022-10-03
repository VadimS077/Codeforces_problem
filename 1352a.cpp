#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n = 0;
        std::cin >> n;
        int c1 = n / 1000;
        int c2 = n / 100 % 10;
        int c3 = n / 10 % 10;
        int c4 = n % 10;
        int c = c1 > 0 ? 1 : 0;
        c += c2 > 0 ? 1 : 0;
        c += c3 > 0 ? 1 : 0;
        c += c4 > 0 ? 1 : 0;
        std::cout << c << std::endl;
        if (c1) {
            std::cout << c1 * 1000 << ' ';
        }
        if (c2) {
            std::cout << c2 * 100 << ' ';
        }
        if (c3) {
            std::cout << c3 * 10 << ' ';
        }
        if (c4) {
            std::cout << c4 << ' ';
        }
    }
}