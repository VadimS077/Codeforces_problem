#include <iostream>
#include <vector>
int main() {
    int t = 0;
    std::cin >> t;

    
    

    
    
    ;
    for (int i = 0; i < t; i++) {
        int n, x;
        std::cin >>  n >> x;
        int g = 0;
        std::vector <int> vec(300, 0);


        for (int j = 0; j < n; j++) {
            int a;
            std::cin >> a;
            if (vec[a - 1] == 0) {
                vec[a - 1] = 1;

            }
        }


        for (int r = 0; r < vec.size(); r++) {
            if (x == 0 && vec[r]==0) {
                break;

            }
            if (vec[r] == 0) {
                x -= 1;
                g += 1;

            }
            else {
                g += 1;

            }
            
            
        }std::cout << g << std::endl;

    } 
    
}