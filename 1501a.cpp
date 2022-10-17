#include <iostream>

#include <vector>


int main() {
    int t = 0;
    std::cin >> t;
    while (t--) {
        int n = 0;
        std::cin >> n;
        std::vector <int> a;

        for (int i = 0; i < n; i++) {
            int ai = 0;
            std::cin >> ai;
            a.push_back(ai);



        }int rost = 1;

        for (int i = 0; i < n; i++) {

            if (a[i] == 1 && a[i - 1] == 1) {
                rost += 5;
            }
            else {
                if (a[i] == 1) {
                    rost += 1;
                }

            }if (a[i] == 0 && a[i - 1] == 0 && i != 0) {
                rost = -1;
                break;
            }
        }std::cout << rost << std::endl;


    }
}