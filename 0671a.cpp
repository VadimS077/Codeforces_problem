#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int b = n / 5;
    int c = n % 5;
    if (c > 0) {
        std::cout << b + 1;

    }
    else {
        std::cout << b;
    }


}