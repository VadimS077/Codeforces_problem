#include <iostream>
#include <vector>

int main() {
    
    int n = 0;
    std::cin >> n;
    std::vector <int> a(n);
    
    for (int i = 1; i <= n; i++) {
        int pi = 0;
        std::cin >> pi;
        a[pi - 1] = i;

    }
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i]<<" ";
    }
}
